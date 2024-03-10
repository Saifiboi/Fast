#include <iostream>
#include "key.h"
using namespace std;

// Below are helping functions for mixing columns both for encryption and decryption.


    unsigned char GF_MUL(unsigned char a, unsigned char b) {    //Function performing Gloye Feild Multiplication.
        unsigned char result = 0x00;

        while (b != 0) {
            if (b & 0x01) {
                result ^= a;
            }

            bool carry = a & 0x80;
            a <<= 1;

            if (carry) {
                a ^= 0x1B; // XOR with irreducible polynomial x^8 + x^4 + x^3 + x + 1
            }

            b >>= 1;
        }

        return result;
    }

    void multiply_bridge(unsigned char* clmn,unsigned char State_array[][4]){       //Bridge function for calling multiplication and updating columns.
        unsigned char res_calculator;
        unsigned char multiply_res[4];
        for(int i=0;i<4;i++){
            res_calculator = 0x00;
            for(int j=0;j<4;j++){
                res_calculator = res_calculator ^ GF_MUL(clmn[j],State_array[i][j]);
            }
            multiply_res[i] = res_calculator;
        }
        for(int i=0;i<4;i++){
            clmn[i] = multiply_res [i];
        }

    }



//Below are utility functions used for both encryption and Decryption.


    void Shift_rows_S(unsigned char *State_array, int direction=0){     //Function for shifting rows of State Array.
        if(direction==0){   //direction 0 means left shift.
            unsigned char temp = State_array[0];
            for(int i = 1; i < 4; i++)
                State_array[i-1] = State_array[i];
            State_array[3] = temp;
        }else{
            unsigned char temp = State_array[3];
            for(int i=3;i>0;i--){
                State_array[i] = State_array[i-1];
            }
            State_array[0] = temp;
        }

    }


    void key_add(unsigned char** key,unsigned char arr[][4]){       //Function for adding specific array in State Array.
        for(int i=0;i<4;i++){
            for(int j=0 ; j < 4 ; j++){
                arr [i][j] = key[i][j] ^ arr[i][j];
            }
        }
    }


// Below are functions Specified with Encryption.


    void Subs_bytes_S(unsigned char State_array[][4]){      //Function for substituting bytes from S-box into State Array.
        char row_check;
        char col_check;
        for(int l=0;l<4;l++){
            for(int i = 0;i < 4 ; i++){
                row_check = State_array[l][i] >> 4;
                col_check = State_array[l][i] ^ (row_check<<4);
                for(int j=1;j<17;j++){
                    if(sbox[j][0] == row_check){
                        for(int k=1;k<17;k++){
                            if(sbox[0][k]==col_check){
                                State_array[l][i] = sbox[j][k];
                            }
                        }
                    }
                }
            }
        }
    }

    void shift_call_Enc(unsigned char State_array[][4]){       //Function for sceduling shifters for State Array in specified Direction.
        Shift_rows_S(State_array[1]);
        Shift_rows_S(State_array[2]);
        Shift_rows_S(State_array[2]);
        Shift_rows_S(State_array[3],1);
    }



    void Mix_Col_Enc(unsigned char State_array[][4]){       //Function for mixing columns of State Array.
        unsigned char const_matrix[4][4] = {
           0x02 , 0x03 , 0x01 , 0x01
         , 0x01 , 0x02 , 0x03 , 0x01
         , 0x01 , 0x01 , 0x02 , 0x03
         , 0x03 , 0x01 , 0x01 , 0x02
          };
          unsigned char column[4];
          for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                column[j] = State_array[j][i];
            }
            multiply_bridge(column,const_matrix);
            for(int j=0;j<4;j++){
                State_array[j][i] = column[j];
            }

          }


    }
    
    void encrypt(unsigned char State_array[][4],unsigned char** key){   //Function for sceduling  one Encryption round. 
        Subs_bytes_S(State_array);
        shift_call_Enc(State_array);
        Mix_Col_Enc(State_array);
        key_add(key,State_array);
    }











