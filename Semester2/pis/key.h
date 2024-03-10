#include <string>
#include <iostream>

using namespace std;
    void Transpose(unsigned char** round_key){  //Function to take transpose of 1 round key.
        unsigned char temp_store[4][4];     //Array for temporary storage of transpose
        for(int i = 0;i<4;i++){
            for(int j=0;j<4;j++){
                temp_store[i][j] = round_key[j][i];
            }
        }
        for(int i = 0;i<4;i++){     //storing transpose again in round key.
            for(int j=0;j<4;j++){
                round_key[i][j] = temp_store[i][j];
            }
        }
    }

    //S-box for mapping of hexadecimal values.
    unsigned char sbox[17][17] =
{   0x30,0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x00, 0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76,
	0x01, 0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0, 0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0,
	0x02, 0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC, 0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15,
	0x03, 0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A, 0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75,
	0x04, 0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0, 0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84,
	0x05, 0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B, 0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF,
	0x06, 0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85, 0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8,
	0x07, 0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5, 0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2,
	0x08, 0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17, 0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73,
	0x09, 0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88, 0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB,
	0x0A, 0xE0, 0x32, 0x3A, 0x0A, 0x49, 0x06, 0x24, 0x5C, 0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4, 0x79,
	0x0B, 0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9, 0x6C, 0x56, 0xF4, 0xEA, 0x65, 0x7A, 0xAE, 0x08,
	0x0C, 0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4, 0xC6, 0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A,
	0x0D, 0x70, 0x3E, 0xB5, 0x66, 0x48, 0x03, 0xF6, 0x0E, 0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D, 0x9E,
	0x0E, 0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94, 0x9B, 0x1E, 0x87, 0xE9, 0xCE, 0x55, 0x28, 0xDF,
	0x0F, 0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42, 0x68, 0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16
};
class key{          //Class dealing with keys of 10 rounds.
private:
    unsigned char*** Key_container;        // pointer to contain (10+1) 2D key matrices.
    unsigned char round_const;              //round constant to be used in gloye function.
public:
    key(){
        this->round_const = 0x01;       //setting round constant to 1.
        this->Key_container = new unsigned char**[11];        //Creating 11 2D key matrices.
        for(int i=0;i<11;i++){
           this->Key_container[i] = new unsigned char*[4];
            for(int j=0;j<4;j++){
               this->Key_container[i][j] = new unsigned char[4];
            }
        }
    }
    ~key(){     //Free up the allocated DMA for keys.
        for(int i=0;i<11;i++){
            for(int j=0;j<4;j++){
                delete []  this->Key_container[i][j];
            }
            delete [] this->Key_container[i];
        }
        delete [] this->Key_container;
    }
    void Shift_rows_G(unsigned char *word){     //Function for 1 left shift to be used in gloye.
        char temp = word[0];
        for(int i = 1; i < 4; i++)
            word[i-1] = word[i];
        word[3] = temp;
    }

    void Subs_byte_G(unsigned char *word){  //Function for substitution from S-box to be used in gloye
        char row_check;     //contains 1st 4 bits of a character.
        char col_check;     //contains last 4 bits of a character.
        for(int i = 0;i < 4 ; i++){
            row_check = word[i] >> 4;
            col_check = word[i] ^ (row_check<<4);
            for(int j=1;j<17;j++){
                if(sbox[j][0] == row_check){
                    for(int k=1;k<17;k++){
                        if(sbox[0][k]==col_check){
                            word[i] = sbox[j][k];
                        }
                    }
                }
            }
        }

    }

    void add_round_const(unsigned char *word){      //Function to add round constant in word to be used in gloye.
        word[0] = word[0] ^this->round_const;
        this->round_const= this->round_const<<1;
        if(this->round_const==0x00)
            this->round_const=0x1b;
    }

    void gloye(unsigned char *word){    //Gloye function for last word of previous key.
        Shift_rows_G(word);
        Subs_byte_G(word);
        add_round_const(word);
    }
    void input_key(){       //Function to take input initial key.
        string key_str;
        int l = 0;
        cout<<"Enter The Key : ";
        getline(cin, key_str);
        while(key_str.length()>16){
            cout<<"Error Enter Again: ";
            key_str.clear();
            cin.ignore();
            getline(cin,key_str);
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
               this->Key_container[0][i][j] = key_str[l];
               l++;
            }
        }
    }

    void display(){         //Function to display 11 expanded keys.
        for(int i=0;i<11;i++){
            for(int j=0;j<4;j++){
                for(int k=0;k<4;k++){
                    cout<<hex<<static_cast<int>(this->Key_container[i][j][k])<<"\t";
                }
                cout<<endl;
            }
            cout<<i<<"th endl"<<endl;
        }
    }

    void new_key_exp(){     //Function that expands previous keys to create new keys.
        unsigned char prev_last_clmn[4];
         for(int k = 1; k < 11; k++){
            for(int i=0;i<4;i++){
                prev_last_clmn[i] = this->Key_container[k-1][3][i];
            }
            gloye(prev_last_clmn);

            for(int i=0;i<4;i++){
                this->Key_container[k][0][i] = this->Key_container[k-1][0][i] ^ prev_last_clmn[i];
                this->Key_container[k][1][i] = this->Key_container[k][0][i] ^ this->Key_container[k-1][1][i];
                this->Key_container[k][2][i] = this->Key_container[k][1][i] ^ this->Key_container[k-1][2][i];
                this->Key_container[k][3][i] = this->Key_container[k][2][i] ^ this->Key_container[k-1][3][i];
            }
        }
        for(int i=0 ; i< 11;i++){
            Transpose(this->Key_container[i]);
        }
    }

    unsigned char*** get_key_container(){       //Function returning key container.
        return this->Key_container;
    }












};

