#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <sys/wait.h>
using namespace std;

int main()
{

    int pipefd[2];
    int a, b, c, d;
    a = 1;
    b = 6;
    c = 9;
    d = 7;

    if (pipe(pipefd) == -1)
        cout << "error in pipe \n";

    pid_t pid1;

    pid1 = fork();

    if (pid1 == 0)
    {

        cout << "this is child 1 \n";
        int x = d * a;

        close(pipefd[0]);
        write(pipefd[1], &x, sizeof(x));

        close(pipefd[1]);
    }

    else if (pid1 > 0)
    {

        cout << "this is parent \n";

        int res1 = 0;

        close(pipefd[1]);
        ssize_t size_byte = read(pipefd[0], &res1, sizeof(res1));
        if (size_byte <= 0)
            cout << "error in reading" << endl;
        close(pipefd[0]);
        int pipefd3[2];
        if (pipe(pipefd3) == -1)
            cout << "error in pipe \n";
        pid_t pid2;
        pid2 = fork();
        if (pid2 == 0)
        {
            cout << "this is child 2\n";
            int pipefd2[2];
            if (pipe(pipefd2) == -1)
                cout << "error in pipe \n";
            pid_t pid3 = fork();
            if (pid3 == 0)
            {
                cout << "this is grand child \n";
                close(pipefd2[0]);
                int x = c - a;
                write(pipefd2[1], &x, sizeof(x));
                close(pipefd2[1]);
            }
            else
            {
                close(pipefd2[1]);
                int res1;
                size_byte = read(pipefd2[0], &res1, sizeof(res1));
                if (size_byte <= 0)
                    cout << "error in reading" << endl;
                close(pipefd2[0]);
                close(pipefd3[0]);
                int res2 = a + b + res1;
                write(pipefd3[1], &res2, sizeof(res2));
                close(pipefd3[1]);
            }
        }
        else
        {
            wait(NULL);
            int res3 = 0;
            size_byte = read(pipefd3[0], &res3, sizeof(res3));
            if (size_byte <= 0)
                cout << "error in reading" << endl;
            close(pipefd[0]);
            cout << "\nResult =" << res1 * res3 << endl;
        }
    }
    return 0;
}
