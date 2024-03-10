#include<iostream>
#include<string>
using namespace std;
class ceaser{
    string p_text;
    string c_text;
    string decrypted_text;
    int key;
    public:
    ceaser(int k=3)
    {
        this->key=k;
    }
    void input_plaintext()
    {
        cout<<"\nEnter Plain Text:";
        cin>>this->p_text;
        p_text.push_back('\0');
        int i=0;
        while(this->p_text[i]!='\0')
        {
           if(this->p_text[i]>='a' && this->p_text[i]<='z')
           {
            this->p_text[i]-=32;
           }
            i++;
        }
        cout<<p_text<<endl;

    }
    void Encrypt()
    {
        int i=0;
        while(this->p_text[i]!='\0')
        {
            this->c_text.push_back((((this->p_text[i]-'A')+this->key)%26)+'A');
            i++;
        }
        c_text.push_back('\0');
        cout<<"\nEncrypted Text is :"<<this->c_text<<endl;
    }
    void decrypt()
    {
        int i=0;
        while(this->c_text[i]!='\0')
        {
            if((this->c_text[i]-'A')-this->key<0)
            {
                 this->decrypted_text.push_back((26+((this->c_text[i]-'A')-this->key))+'A');
            }
            else
                this->decrypted_text.push_back(((this->c_text[i]-'A')-this->key)+'A');
            i++;
        }
        this->decrypted_text.push_back('\0');
        cout<<"\nDecrypted Text is :"<<this->decrypted_text<<endl;
    }
};
int main()
{
    ceaser a;
    a.input_plaintext();
    a.Encrypt();
    a.decrypt();
}
