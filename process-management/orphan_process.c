
void main()
{
    if(fork()==0)
    {
        printf("In C pid= %d ppid= %d\n", getpid(), getppid());
        sleep(20);
        printf("\nIn C After sleep pid= %d ppid= %d\n", getpid(), getppid());
    }
    else
    {
    printf("In P pid= %d\n", getpid());
    sleep(10);
    printf("P Done!!\n");
    }
}
