#include <iostream>
#include <sys/wait.h>
#include<unistd.h>
using namespace std;

int main ()
{

for(int i=0;i<6;i++)
{
    fork();
}
cout<<"Hello World!"<<endl;


return 0;

}