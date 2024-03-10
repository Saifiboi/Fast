#include <iostream>
	#include <sys/wait.h>
#include <unistd.h>
#include <string>
using namespace std;
void display_menu()
{
    cout << endl
         << ".....Menu...." << endl;
    cout << "1.LS" << endl;
    cout << "2.cat" << endl;
    cout << "3.Grep" << endl;
    cout << "4.touch" << endl;
    cout << "5.mkdir" << endl;
    cout << "6.print \"Hello world!\"" << endl;
    cout << "7.Exit" << endl;
    cout << "\nEnter Your Choice:";
}
int main()
{
    pid_t cid;
    while (1)
    {
        cid = fork();
        int status=0;
        if (cid == 0)
        {
            int choice;
            display_menu();
            cin >> choice;
            if (choice == 7)
            {
                int ret=1;
                exit(ret);
            }
            else if (choice == 1)
            {
                string path;
                cout<<"\nEnter Path of file you want to List:";
                cin.ignore();
                getline(cin, path);
                cout<<path<<endl;
                execl("/bin/ls", "ls","-l",path.c_str(), NULL);
                cout<<"\nFailed to Execute:\n";
                exit(0);
            }
            else if (choice == 2)
            {
                string path;
                cout<<"\nEnter Path of file you want to Display:";
                cin.ignore();
                getline(cin, path);
                execlp("cat","cat",path.c_str(),NULL);
                cout<<"\nFailed to Execute:\n";
                exit(0);
            }
            else if(choice == 3)
            {
                string filepath,key;
                cout<<"\nEnter File Path from which you want to search:";
                cin.ignore();
                getline(cin,filepath);
                cout<<"\nEnter the key you want to search for:";
                cin.ignore();
                getline(cin,key);
                char *args[]={"grep",(char*)key.c_str(),(char*)filepath.c_str(),NULL};
                execv("/bin/grep",args);
                cout<<"\nFailed to Execute:\n";
                exit(0);
            }
            else if (choice == 5)
            {
                string path;
                cout<<"\nEnter Path of directory you want to make:";
                cin.ignore();
                getline(cin, path);
                char *args[]={"mkdir", (char *)path.c_str(),NULL};
                execvp( "mkdir",args);
                cout<<"\nFailed to Execute:\n";
                exit(0);
            }
            else if(choice == 4)
            {
                string path;
                cout<<"\nEnter Path of file you want to make:";
                cin.ignore();
                getline(cin, path);
                execl("/bin/touch","touch",path.c_str(),NULL);
                cout<<"\nFailed to Execute:\n";
                exit(0);
            }
            else{
                execl("./hello","./hello",NULL);
                cout<<"\nFailed to Execute:\n";
                exit(0);
            }
        }
        else if(cid==-1)
        {
            cout<<"\nError During Fork.\n";
        }
        else
        {
            waitpid(cid,&status,0);
            cout<<"\nstatus:"<<status<<endl;
            if (status == 256)
            {
                cout << "\n .......Program Terminating......\n";
                break;
            }
        }
    }
}
