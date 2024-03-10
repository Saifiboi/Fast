#include<iostream>
#include <string>
using namespace std;
class simple_subs
{
    int inc_key[26];
    string p_text;
    string c_text;
    string dec_text;
    public:
    simple_subs()
    {
        for(int i=0;i<26;i++)
        {
            inc_key[i]=rand()%26;
            for(int j=0;j<i;j++)
            {
                if(inc_key[j]==inc_key[i])
                {
                    i--;
                    break;
                }
            }
        }
    }
    void input_text()
    {
        cout<<endl<<"Enter Plain Text:";
        cin>>p_text;
        int i=0;
        while(p_text[i]!='\0')
        {
            if(p_text[i]>='a' && p_text[i]<='z')
            {
                p_text[i]-=32;
            }
            i++;
        }
    }
    void encrypt()
    {
        int i=0,ch,ch2;
        while(this->p_text[i]!='\0')
        {
            ch=(this->p_text[i]-'A');
            this->c_text.push_back((this->inc_key[ch])+'A');
            i++;
        }
        c_text.push_back('\0');
        cout<<"\nEncrypted Text is :"<<this->c_text<<endl;
    }
    void decrypt()
    {
         int i=0,ch;
        while(this->c_text[i]!='\0')
        {
            ch=c_text[i]-'A';
            for(int j=0;j<26;j++)
            {
                if(ch==inc_key[j])
                {
                    dec_text.push_back(j+'A');
                }
            }
            i++;
        }
        dec_text.push_back('\0');
        cout<<"\nDecrypted Text is :"<<this->dec_text<<endl;
    }
};

int main()
{
    simple_subs a;
    a.input_text();
    a.encrypt();
    a.decrypt();
}