#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>

/*
main method of server file
*/
int main()
{
    // create socket
    socket(AF_INET, SOCK_STREAM, 0);

    while (1)
    {
        // waiting for some kind of request
        printf("[*] Waiting for requests\n");
        sleep(1);
    }
}