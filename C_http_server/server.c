/*
 * File: server.c
 * Author: Daniel Bretschneider
 * Created: 13.06.2026
 *
 * Description:
 *     Create a simple TCP/IP based IPv4 HTTP Server
 *
 * Usage:
 *     run.sh server.c
 *
 * Notes:
 *     - Check out this guide: https://beej.us/guide/bgnet/html/split-wide/
 *     - man command is extremely helpful (f.e. man socket)
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>


/*
main method of server file
*/
int main()
{
    // create socket
    int file_descriptor =socket(AF_INET, SOCK_STREAM, 0);

    while (1)
    {
        // waiting for some kind of request
        printf("[*] Waiting for requests\n");
        sleep(1);
    }
}