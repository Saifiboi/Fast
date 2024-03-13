#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <sys/wait.h>
using namespace std;

int main()
{
    pid_t pid1;
    int num;
    cout << "\nEnter a number:";
    cin >> num;
    int *arr = new int[num];
    for (int i = 1; i <= num; i++)
    {
        int fd[2];
        if (pipe(fd) == -1)
            cout << "error in pipe \n";
        pid1 = fork();
        if (pid1 == 0)
        {
            srand(time(0) + getpid());
            cout << "this is child :" << i << endl;
            int x = rand() % 10 + 1;
            close(fd[0]);
            write(fd[1], &x, sizeof(x));
            close(fd[1]);
            return 0;
        }
        else
        {
            int x = 0;
            close(fd[1]);
            ssize_t size_byte = read(fd[0], &x, sizeof(x));
            if (size_byte <= 0)
                cout << "error in reading" << endl;
            arr[i]=x;
            close(fd[0]);
        }
    }
    int * visited=new int [num];
    int count;
    int greatest=0;
    int ind=0;
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<num;i++)
    {
        count=0;
        if(visited[i]!=1)
        {
            count++;
            visited[i]=1;
            for(int j=i+1;j<num;j++)
            {
                if(arr[i]==arr[j])
                {
                    visited[j]=1;
                    count++;
                }
            }
            if(greatest<count)
            {
                greatest=count;
                ind=i;
            }
        }
    }
    cout<<"\nThe Greatest Element is:"<<arr[ind]<<" having repition :"<<greatest<<endl;
}
