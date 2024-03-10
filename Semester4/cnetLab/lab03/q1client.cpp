#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
	
	char request[256];
	char buf[200];
	
	// create the socket
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	
	//setup an address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = INADDR_ANY;
	server_address.sin_port = htons(3001);

	connect(sock, (struct sockaddr *) &server_address, sizeof(server_address));
	
	
	
	cout<< "enter string: ";
	cin.getline(request,256);
	send(sock, request, sizeof(request), 0);
	recv(sock, &buf, sizeof(buf), 0);
	cout<<buf<<endl;
	
	
	close(sock);

	return 0;
}