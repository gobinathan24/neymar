#include<stdio.h>
int main()
{
	int a=10,b=20,c=0;
	int *p1,*p2,*p3;
	p1=&a,p2=&b,p3=&c;
	printf("\nvalue of p1  is:%d",*p1);
	printf("\nvalue of p2  is:%d",*p2);
	c=a;
	a=b;
	b=c;
	printf("\np1=%d\np2=%d",a,b);
	
}
