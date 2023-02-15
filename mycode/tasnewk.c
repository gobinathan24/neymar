#include<stdio.h>
int gobi(int,int);
int nathan(int,int);
int nathan(int e,int f)
{
	int g;
	g=e-f;
	return g;
}
int gobi(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int (*ptr)(int,int)=gobi;
	int sum;
	int sub;
	sum=ptr(15,2);
	printf("\nadd=%d",sum);
	int (*ptr1)(int,int)=nathan;
	sub=ptr1(25,22);
	printf("\nsub=%d",sub);
}
