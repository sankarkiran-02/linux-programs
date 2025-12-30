#include<stdio.h>
#include<unistd.h>

void main()
{
    printf("Hello World PID: %d\n", getpid());

    printf("Before Sleep....\n");
    sleep(10);
    printf("After Sleep....\n");
    
    while(1);
}