#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include<iostream>
#include<cstring>
using namespace std;
void clear(char arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=0;
    }
}
int main() {

	char server_message[256] = "Hi, Yes you have reached the server!";
	char buf[256];
	// create the server socket
	int server_socket;
	server_socket = socket(AF_INET, SOCK_STREAM, 0);

	
	// define the server address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(3001);
	server_address.sin_addr.s_addr = INADDR_ANY;

	// bind the socket to our specified IP and port
	bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));
	listen(server_socket, 5);
	int client_socket[2];
	client_socket[0] = accept(server_socket, NULL, NULL);
	client_socket[1] = accept(server_socket, NULL, NULL);
    while(1)
    {
        clear(buf,256);
        if(client_socket[0]==0 && client_socket[1]==0)
        {
            break;
        }
        if(client_socket[0]!=0)
        {
            recv(client_socket[0], &buf, sizeof(buf), 0);
            if(strcmp(buf,"exit")==0)
            {
                client_socket[0]=0;
            }
            else{
                cout<<"Client 1 message:"<<buf<<endl;
                cout<<"\nYour Response:";
                cin>>server_message;
                send(client_socket[0], &server_message, sizeof(server_message), 0);
            }
        }
        if(client_socket[1]!=0)
        {
            clear(buf,256);
            recv(client_socket[1], &buf, sizeof(buf), 0);
            if(strcmp(buf,"exit")==0)
            {
                client_socket[1]=0;
            }
            else
            {
                cout<<"Client 2 message:"<<buf<<endl;
                cout<<"\nYour Response:";
                cin>>server_message;
                send(client_socket[1], &server_message, sizeof(server_message), 0);
            }
        }
    }
        
	// close the socket
	close(server_socket);
	
	return 0;
}