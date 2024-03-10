#include <iostream>
#include <cstring>
#include <sys/wait.h>
#include <unistd.h>
#include <vector>
#include <cstring>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include "base.h"
#define SHM_SIZE 1024
using namespace std;
void fun(vector<string> &vec, string x)
{
    string xd = "";
    for (int i = 0; i < x.length() + 1; i++)
    {
        if (x[i] == '.' || x[i] == ' ' || x[i] == ',' || x[i] == '\0')
        {
            vec.push_back(xd);
            xd.clear();
        }
        else
        {
            xd.push_back(x[i]);
        }
    }
}
int main()
{
    string input;
    int shmid;

    key_t key = 1234; // Same key as the sender

    void *shm_ptr;
    if ((shmid = shmget(key, SHM_SIZE, S_IRUSR | S_IWUSR)) == -1)
    {

        perror("shmget");

        exit(EXIT_FAILURE);
    }
    shm_ptr = shmat(shmid, NULL, 0);

    if (shm_ptr == (char *)(-1))
    {

        perror("shmat");

        exit(EXIT_FAILURE);
    }
    input.assign(reinterpret_cast<const char*>(shm_ptr));
    vector<string>inp_vec;
    cout<<"\nInput:"<<input<<endl;
    string output;
    string check;
    Trie obj1;
	string line;
	ifstream words ("words.txt");
	if(words){
		while(getline(words,line)){
			obj1.insertWord(line);
		}
		words.close();
	}

	BKTreeInit();
    fun(inp_vec,input);
    string suggestions;
    for(int i=0;i<inp_vec.size();i++)
    {
        cout<<"\nChild::Calling recommend for "<<inp_vec[i]<<":\n";
        if((int)obj1.searchWord(inp_vec[i])){
			cout<<"Child:The spelling of this word is correct.\n"<<endl;
			BKTreeSearch(inp_vec[i]);
		}else{
			cout<<"Child:The word is spelled wrong.\n"<<endl;
			obj1.recommend(line);
			suggestions=BKTreeSearch(inp_vec[i]);
            output+=suggestions;
        }
    }
    strcpy((char *)shm_ptr,output.c_str());
    exit(0);
}