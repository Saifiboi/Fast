#include <iostream>
#include <sys/wait.h>
#include<unistd.h>
using namespace std;

int main ()
{
    int a,b,c,d;
    cout<<"\nEnter A,B,C,D:";
    cin>>a>>b>>c>>d;
    pid_t pid;

    pid=fork();

    if (pid==0){
        cout<<"this is child 1\n";
        exit(d*a);
    }

    else{

        int status=0;
        waitpid(pid,&status,0);

        int res1=WEXITSTATUS(status);
        pid=fork();
        if (pid==0){
            cout<<"this is child 2\n";
            pid_t pid1=fork();
            if (pid1==0){
            cout<<"this is grand child \n";
            exit(c-a);
            }
            else
            {
                waitpid(pid1,&status,0);
                int res2=WEXITSTATUS(status);
                exit(a+b+res2);
            }
        }
        else
        {
            waitpid(pid,&status,0);
            int res3=WEXITSTATUS(status);
            cout<<"\nResult="<<res1*res3<<endl;
        }
    }


    return 0;
}