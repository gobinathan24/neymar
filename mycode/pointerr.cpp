#include<stdio.h>
int main()
{
	int *p;
	int var=10;
	p=&var;
	printf("\nvalue of variable is:%d",var);
	printf("\nvalue of variable is:%d",*p);
	printf("\naddress of variable is:%p",&var);
	printf("\naddress of variable is:%p",p);
	printf("\naddress of variable is:%p ", &p);
}

