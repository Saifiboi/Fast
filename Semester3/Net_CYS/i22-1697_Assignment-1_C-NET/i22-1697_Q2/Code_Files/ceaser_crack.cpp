#include<iostream>
using namespace std;
void brute_force(string enc_text)
{
    string decrypted_text;

    int i;
    for(int j=1;j<=25;j++)
    {
        cout<<endl<<j<<".";
        i=0;
        decrypted_text.clear();
        while(enc_text[i]!='\0')
        {
            if((enc_text[i]-'A')-j<0)
            {
                decrypted_text.push_back((26+((enc_text[i]-'A')-j))+'A');
            }
            else
                decrypted_text.push_back(((enc_text[i]-'A')-j)+'A');   
            i++;
        }
        decrypted_text.push_back('\0');
        cout<<decrypted_text<<endl;
    }
}
int main()
{
    string enc_text;
    cout<<"\nEnter Encrypted text:";
    cin>>enc_text;
    brute_force(enc_text);
}