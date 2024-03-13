// Server side implementation of UDP client-server model
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include<iostream>
using namespace std;

#define PORT 8080
#define MAXLINE 1024

// Driver code
int main()
{
    int sockfd;
    char buffer[MAXLINE];
    char *hello = "Hello from server";
    struct sockaddr_in servaddr, cliaddr;
    int num1, num2;
    char op;

    // Creating socket file descriptor
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
    {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    // memset(&servaddr, 0, sizeof(servaddr));
    // memset(&cliaddr, 0, sizeof(cliaddr));

    // Filling server information
    servaddr.sin_family = AF_INET; // IPv4
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    // Bind the socket with the server address
    if (bind(sockfd, (const struct sockaddr *)&servaddr,
             sizeof(servaddr)) < 0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    socklen_t len;
    int n;

    len = sizeof(cliaddr); // len is value/resuslt
    n = recvfrom(sockfd, &num1, MAXLINE,
                 0, (struct sockaddr *)&cliaddr, &len);
    cout<<"Client :NUm1="<<num1<<endl;
    n = recvfrom(sockfd, &op, MAXLINE,
                 0, (struct sockaddr *)&cliaddr, &len);
    cout<<"Client :op="<<op<<endl;
    n = recvfrom(sockfd, &num2, MAXLINE,
                 0, (struct sockaddr *)&cliaddr, &len);
    cout<<"Client :NUm2="<<num2<<endl;
    float res;
    if(op=='+')
    {
        res=num1+num2;
    }
    else if (op=='-')
    {
        res=num1-num2;
    }
    else if (op=='*')
    {
        res=num1*num2;
    }
    else if(op=='/')
    {
        res=num1/num2;
    }
    else{
        res=num1%num2;
    }
    sendto(sockfd, &res, 4,
		0, (const struct sockaddr *) &cliaddr,
			len);
    close(sockfd);
    return 0;
}