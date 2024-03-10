#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include<iostream>
#include<string>
using namespace std;
int calcsize(char buf[],int size1)
{
    int size=0;
    while(buf[size]!='\0' && size<size1)
    {
        size++;
    }
    return size;
}
int main() {

	char server_message[256] = "Hi, Yes you have reached the server!";
    char serv_new_msg[200];
	char buf[200];
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
	int client_socket;
	client_socket = accept(server_socket, NULL, NULL);
	

	recv(client_socket, &buf, sizeof(buf), 0);
    int i,j;
    for(i=calcsize(buf,200)-1,j=0;i>=0;i--,j++)
    {
        serv_new_msg[j]=buf[i];
    }
    serv_new_msg[j]='\0';   
	// close the socket
    send(client_socket, serv_new_msg, sizeof(serv_new_msg), 0);
	close(server_socket);
	
	return 0;
}