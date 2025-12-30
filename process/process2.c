#include<stdio.h>
#include<unistd.h>

void main()
{
    printf("Hello World PID: %d\n", getpid());

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("num= %d %o %x\n", num, num, num);
    while(1);
}