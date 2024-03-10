#include<iostream>
#include<string>
using namespace std;
void words_list(string sent[],int total_sentence,int word_count,string words[]);
int main()
{
    string corpus[]={"hello i am toqeer.","how is the life?","what is going in the life?","life is very short."};
    int sntnc;
    sntnc=sizeof(corpus)/sizeof(string);
    const int words_count=18;
    string words[words_count]={"hello","hello"};
    words_list(corpus,sntnc,words_count,words);
  //  for(int i=0;i<words_count;i++)
       // cout<<words[i]<<endl;
}

void words_list(string sent[],int total_sentence,int word_count,string words[])
{
    int j=0,l=0;
    for(int i=0,k=0;i<total_sentence;i++)
    {
        while(sent[i][j]!='\0')
        {
            while(sent[i][j]!=' ' && sent[i][j]!='.' && sent[i][j]!='?')
            {
                words[k][l]=sent[i][j];
                j++;
                l++;
            }
            cout<<words[k]<<endl;
            k++;
            j++;
            l=0;
        }
    }
}
