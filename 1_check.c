#include<stdio.h>
#include<winsock.h>
#include<stdlib.h>

int main(void){
    WSADATA wsaData;

    if(WSAStartup(MAKEWORD(2,2),&wsaData)!=0){
        fprintf(stderr, "WSAStartup failed.\n");
        exit(1);
    }
    
    if(LOBYTE(wsaData.wVersion)!=2||HIBYTE(wsaData.wVersion)!=2){
        fprintf(stderr,"Version 2.2 of Winsock not available.\n");
        WSACleanup();
        exit(2);
    }
    printf("Winsock 2.2 startup successful!\n");
    system("pause");
}
