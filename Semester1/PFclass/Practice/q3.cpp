#include<iostream>
#include<string>
using namespace std;
int count_words(string arr[],int total_sentence);
void words_list(string sent[],int total_sentence,int word_count,string *words);
int main()
{
	string corpus[]={"hello i am toqeer.","how is the life?","what is going in the life?","life is very short."};
	int sntnc;
	sntnc=sizeof(corpus)/sizeof(string);
	int words_count=count_words(corpus,sntnc);
	string *words;
	words=new string[words_count];
	words_list(corpus,sntnc,words_count,words);
	for(int i=0;i<words_count;i++)
		cout<<words[i]<<endl;
}
int count_words(string arr[],int total_sentence)
{
	int j=0,words;
	for(int i=0;i<total_sentence;i++)
	{
		j=0;
		while(arr[i][j]!='\0')
		{
			while(arr[i][j]!=' ' && arr[i][j]!='\0')
			{
				j++;
			}
			words++;
			if(arr[i][j]=='\0')
				break;
			j++;
		}
	}
	
	return words;
}
void words_list(string sent[],int total_sentence,int word_count,string *words)
{
	int j=0,l;
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
			k++;
			if(sent[i][j]=='.' || sent[i][j]=='?')
				break;
			j++;
			l=0;
		}
	}
}