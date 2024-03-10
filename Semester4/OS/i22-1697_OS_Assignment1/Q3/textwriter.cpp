#include <iostream>
#include <string>
#include <sys/wait.h>
#include <unistd.h>
#include <vector>
#include <cstring>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

#define SHM_SIZE 1024
void printerror(vector<string> &vec, int size)
{
    cout << "\nParent::The Following are Seggestions for Inputted words is:\n";
    for (int i = 0; i < vec.size()-1; i++)
    {
        cout << endl
             << i + 1 << "." << vec[i];
    }
    cout<<endl;
}
void fun(vector<string> &vec, string x)
{
    string xd = "";
    for (int i = 0; i < x.length() + 1; i++)
    {
        if (x[i] == '.' || x[i] == ' ' || x[i] == ',' || x[i] == '\0')
        {
            vec.push_back(xd);
            // cout<<xd;
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
    string input = "Hello how are you:";
    string output;
    vector<string> errorvec;
    cout << "\nEnter Your Text:";
    getline(cin, input);
    int shmid;
    key_t key = 1234;
    void *shm_ptr;
    if ((shmid = shmget(key, SHM_SIZE, IPC_CREAT | S_IRUSR | S_IWUSR)) == -1)
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
    strcpy((char *)shm_ptr,input.c_str());
    pid_t cid = fork();
    if (cid == 0)
    {
        execl("./child", "./child", NULL);
    }
    else if (cid > 0)
    {
        wait(NULL);
        output.assign(reinterpret_cast<const char *>(shm_ptr));
        if(output.length()==0)
        {
            cout<<"Parent::All Your Text was correct:\n";
            exit(0);
        }
        fun(errorvec,output);
        printerror(errorvec,errorvec.size());
    }
    else
    {
        cerr << "\nError During Fork!" << endl;
        exit(0);
    }
    return 0;
}