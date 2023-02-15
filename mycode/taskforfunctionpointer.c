#include<stdio.h>
int gobi(int,int);
int gobi(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int (*ptr)(int,int)=gobi;
	int sum=ptr(12,5);
	printf("%d",sum);
}
