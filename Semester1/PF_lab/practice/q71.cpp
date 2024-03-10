#include<iostream>
#include<string>
using namespace std;
int count_words(string arr[],int total_sentence);
void words_list(string sent[],int total_sentence,int words_count,string words[]);
void vocab(string words[],int words_count,string V[]);
int main()
{
    string str[]={"hello i am touqeer.","how is the life?","what is going in the life?","life is very short."};
    int words_count=count_words(str,4);
    const int WORDS=words_count;
    string words[WORDS],V[WORDS];
    words_list(str,4,words_count,words);
    vocab(words,words_count,V);
    for(int i=0;i<WORDS;i++)
    {
    	cout<<words[i]<<"\t";
    	
    }
    cout<<endl;
   }
int count_words(string arr[],int total_sentence)
{
    int count=0,j=0;
    for(int i=0;i<total_sentence;i++)
    {
        j=0;
        while(arr[i][j]!='\0')
        {
            while(arr[i][j]!=' ' && arr[i][j]!='\0')
            {
                j++;
            }
            count++;
            j++;
        }
    }
    return count;
}
void words_list(string sent[],int total_sentence,int words_count,string words[])
{
    int k=0,l=0;
    for(int i=0;i<words_count;)
    {
        for(int j=0;j<total_sentence;j++)
        {
            k=0;
            while(sent[j][k]!='\0')
            {
            	l=0;
                while(sent[j][k]!=' ' && sent[j][k]!='\0')
                {
                    words[i][l]=sent[j][k];
                    l++;
                    k++;
                }
                i++;
                k++;
            }
        }
    }
}
void vocab(string words[],int words_count,string V[])
{
	int j=0;
	for(int i=0;i<words_count;i++)
	{
		for(int l=0;l<words_count;l++)
		{
			if(i==l)
			{
				V[j]=words[i];
				j++;
				break;	
			}
			else if(words[i]==words[l])
			{
				break;
			}
		}
	}
	for(int i=0;i<j;i++)
	{
		cout<<V[i]<<"\t";
	}
	cout<<endl;
}
