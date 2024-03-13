// Client side implementation of UDP client-server model
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <iostream>
using namespace std;
#define PORT 8080
#define MAXLINE 1024

// Driver code
int main()
{
       int sockfd;
       char buffer[MAXLINE];
       char *hello = "Hello from client";
       struct sockaddr_in servaddr;

       // Creating socket file descriptor
       if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
       {
              perror("socket creation failed");
              exit(EXIT_FAILURE);
       }

       // memset(&servaddr, 0, sizeof(servaddr));

       // Filling server information
       servaddr.sin_family = AF_INET;
       servaddr.sin_port = htons(PORT);
       servaddr.sin_addr.s_addr = INADDR_ANY;

       socklen_t len;
       int n;
       int num1 = 3, num2 = 4;
       float res;
       char op = '*';
       cout << "\nEnter num1:";
       cin >> num1;
       cout << "\nEnter operator:";
       cin >> op;
       cout << "\nEnter num2:";
       cin >> num2;
       len = sizeof(servaddr);
       sendto(sockfd, &num1, 4,
              0, (const struct sockaddr *)&servaddr,
              sizeof(servaddr));
       sendto(sockfd, &op, 1,
              0, (const struct sockaddr *)&servaddr,
              sizeof(servaddr));
       sendto(sockfd, &num2, 4,
              0, (const struct sockaddr *)&servaddr,
              sizeof(servaddr));
       n = recvfrom(sockfd, &res, MAXLINE,
                    0, (struct sockaddr *)&servaddr,
                    &len);
       cout<<"\nResult="<<res<<endl;
       close(sockfd);
       return 0;
}