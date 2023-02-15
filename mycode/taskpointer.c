#include<stdio.h>
int main()
{
	int a=5;
	int *b;
	int *c;
	int *d;
	b=&a;
	c=&b;
	d=&c;
	printf("%d",*c);
	printf("%d",*(*d));
	
}
