#include"header.h"

void abc(void)
{
	printf("In ABC!!!!\n");
}

void def(void)
{
	printf("In DEF!!!!\n");
}

void main()
{
	printf("Hello...!!\n");
	atexit(abc);
	printf("Hai...!!\n");
	sleep(5);
	atexit(def);
	printf("Vanakam...!!\n");
	sleep(5);
	printf("Bye...!!\n");
	exit(0);
}
