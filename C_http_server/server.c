#include <stdio.h>
#include <unistd.h>

/*
main method of server file
*/
int main()
{
    while (1)
    {
        // waiting for some kind of request
        printf("[*] Waiting for requests\n");
        sleep(1);
    }
}