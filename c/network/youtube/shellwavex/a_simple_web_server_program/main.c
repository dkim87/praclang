#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

char webpage[]=
"HTTP/1.1 200 OK\r\n"
"Content-Type: text/html; charset=UTF-8\r\n\r\n"
"<!DOCTYPE html>\r\n"
"<html><head><title>ShellWaveX</title>\r\n"
"<style>body { background-color: #FFFF00 }</style></head>\r\n"
"<body><center><h1>Hello world!</h1><br>\r\n"
"<img src=\"doctest.jpg\"></center></body></html>\r\n";

int main(void)
{
    struct sockaddr_in server_addr, client_addr;
    socklen_t sin_len = sizeof(client_addr);
    int fd_server, fd_client;
    char buf[2048];
    int fdimg, on;

    fd_server = socket(AF_INET, SOCK_STREAM, 0);
    if (fd_server < 0){
        perror("socket");
        exit(1);
    }

    setsockopt(fd_server, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(int));

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(8080);

    printf("binding...\n");
    if(
            bind(fd_server, (struct sockaddr *) &server_addr, sizeof server_addr) == -1
      ){
        perror("bind");
        close(fd_server);
        exit(1);
    }

    printf("listening...\n");
    if(
            listen(fd_server, 10) == -1
      ){
        perror("listen");
        close(fd_server);
        exit(1);
    }

    printf("entering infinite while loop...\n");
    int loop_counter = 0;
    while(1){
        printf("loop_counter = %d\n", loop_counter);
        printf("accepting...\n");
        fd_client = accept(fd_server, (struct sockaddr *) &client_addr, &sin_len);

        if(fd_client == -1){
            perror("Connection failed ....\n");
        }
        printf("Got client connection......\n");

        printf("forking...\n");
        pid_t pid;
        pid = fork();
        if(pid == 0){
            /* child process */
            printf("### this is a child process\n");
            printf("### my process id: %d\n", getpid());
            printf("### my parents id: %d\n", getppid());
            close (fd_server);
            memset(buf, 0, sizeof buf);
            read(fd_client, buf, sizeof buf - 1);
            printf("### buf start\n");
            printf("%s\n", buf);
            printf("### buf end\n");

            if (!strncmp(buf, "GET /favicon.ico", 16)){
                fdimg = open("favicon.ico", O_RDONLY);
                //sendfile(fd_client, fdimg, NULL, 4000);
                close(fdimg);
            }else if(!strncmp(buf, "GET /doctest.jpg", 16)){
                fdimg = open("doctest.jpg", O_RDONLY);
                //sendfile(fd_client, fdimg, NULL, 6000);
                close(fdimg);
            }else{
                write(fd_client, webpage, sizeof webpage - 1);
            }
            close(fd_client);
            printf("closing a child process...\n");
            exit(0);
        }else if(pid > 0){
            printf("### this is a parent process of %u\n", pid);
            printf("### my process id: %d\n", getpid());
        }else if (pid < 0){
            printf("fork failed.");
        }
        printf("closing a parent process...\n");
        close(fd_client);
        printf("end of while loop.. loop counter = %d\n", loop_counter);
        loop_counter++;
    }

    return 0;
}
