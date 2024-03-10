#include <iostream>
#include "dec.h"
using namespace std;

int main(){
    string plain_text;
    int l = 0;
    cout<<"Enter The Plain Text : ";
    getline(cin,plain_text);
    while(plain_text.length()>16){              //Taking plan text input of 16 bytes.
        cout<<"Error Enter Again: ";
        plain_text.clear();
        cin.ignore();
        getline(cin,plain_text);
    }
    unsigned char state_array[4][4];         //Arranging plain text input in 2D State array.
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            state_array[j][i] = plain_text[l];
            l++;
        }
    }
      for(int i=0;i<4;i++){             //Printing State array in hexadecimals.
        for(int j=0;j<4;j++){
            cout<<hex<<static_cast<int>(state_array[i][j])<<" ";
        }
        cout<<endl;
    }



    key p;                      //Creating key object.
    p.input_key();            //Function to take key as input.
    p.new_key_exp();         //Function that expands the key to 11 keys.


    key_add(p.get_key_container()[0], state_array);     //Adding pre_round key to State Array.

    for(int i=1;i<=9;i++){                  //Loop to execute round 1 to 9 of encryption.
        encrypt(state_array, p.get_key_container()[i]);        //Function to perform encryption operations.
    }
    Subs_bytes_S(state_array);                    //Explicitly executing round 10 without mix columns.
    shift_call_Enc(state_array);
    key_add(p.get_key_container()[10],state_array);
cout<<"Encrypted State Array is:"<<endl;
    for(int i=0;i<4;i++){               //printing state array after encryption.
        for(int j=0;j<4;j++){
            cout<<hex<<static_cast<int>(state_array[i][j])<<" ";
        }
        cout<<endl;
    }


    //Decryption starts here.
    key_add(p.get_key_container()[10], state_array);       //pre round key added for decryption.
    for(int i = 9 ; i>=1 ; i--){                //loop for executing round 1 to 9 of decryption.
        decrypt(state_array, p.get_key_container()[i]);
    }
    shift_call_Dec(state_array);              //Explicitly executing round 10 of decryption without inverse mix columns.
    Subs_bytes_Dec(state_array);
    key_add(p.get_key_container()[0], state_array);


cout<<"Decrypted State Array is:"<<endl;    //Displaying State array After decryption.
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<hex<<static_cast<int>(state_array[i][j])<<" ";
        }
        cout<<endl;
    }
    return 0;
}


