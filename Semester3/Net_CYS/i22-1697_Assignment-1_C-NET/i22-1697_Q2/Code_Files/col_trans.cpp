#include<iostream>
#include<string>
using namespace std;
class col_trans
{
private:
    string p_text;
    string c_text;
    string d_text;
    int key;
    char *key_mat;
    int length;
    int remainder;
    int column;
public:
    col_trans(int k=3)
    {
        key=k;
    }
    void input_text()
    {
        cout<<"\nEnter Plain Text:";
        cin>>p_text;
        p_text.push_back('\0');
        length=p_text.length();
        remainder=(length-1)%key;
        column=(length-1)/key;
        key_mat = new char [length-1];
        for(int i=0;i<length-1;i++)
        {
            key_mat[i]=p_text[i];
        }
    }
    void encrypt()
    {
        for(int i=0;i<key;i++)
        {
            for(int j=i;j<length-1;j+=key)
            {
                c_text.push_back(key_mat[j]);
            }
        }
        
        cout<<"\nEncrypted text is:"<<c_text<<endl;
    }
    void decrypt()
    {
        int k=0;
        for(int i=0;i<column;i++)
        {
            k=0;
            for(int j=i;j<length-1;)
            {
                d_text.push_back(c_text[j]);
                if(k<remainder && remainder!=0)
                    j+=(column+1);
                else
                    j+=column;
                k++;
            }
        }
        int j=0;
        for(int i=0;i<remainder;i++)
        {
            if(i==0)
                j+=(column);
            else
                j+=(column+1);
            d_text.push_back(c_text[j]);

        }
        cout<<"\nDecrypted text is:"<<d_text<<endl;
    }
    ~col_trans()
    {
        if (key_mat!=NULL)
         delete [] key_mat;
    }
};



int main()
{
    col_trans c;
    c.input_text();
    c.encrypt();
    c.decrypt();
}