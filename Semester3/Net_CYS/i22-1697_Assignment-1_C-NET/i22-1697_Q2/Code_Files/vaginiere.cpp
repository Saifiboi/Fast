#include<iostream>
#include<string>
using namespace std;
class vaginiere
{
private:
    string p_text;
    string c_text;
    string d_text;
    int *key;
public:
    vaginiere(){

    }
    void input_text()
    {
        cout<<"\nEnter Plain text:";
        cin>>p_text;
        p_text.push_back('\0');
        int count=0;
        while(p_text[count]!='\0')
        {
            count++;
        }
        key = new int [count-1];
        for(int i=0;i<count -1;i++)
        {
            key[i]=rand()%25+1;
        }

    }
    void encrypt()
    {
        for(int i=0;p_text[i]!='\0';i++)
        {
            c_text.push_back((((p_text[i]-'A')+key[i])%26)+'A');
        }
        c_text.push_back('\0');
        cout<<"\nEncrypted text is:"<<c_text<<endl;
    }
    void decrypt()
    {
        for(int i=0;c_text[i]!='\0';i++)
        {
            if(c_text[i]-'A'-key[i]>=0)
                d_text.push_back((c_text[i]-'A'-key[i])+'A');
            else
                 d_text.push_back((26+(c_text[i]-'A'-key[i]))+'A');
        }
        d_text.push_back('\0');
        cout<<"\nDecrypted text is:"<<d_text<<endl;
    }
    
    ~vaginiere()
    {
        if(key!=NULL)
        {
            delete [] key;
        }
    }
};

int main()
{
    vaginiere V;
    V.input_text();
    V.encrypt();
    V.decrypt();
    return 0;
}