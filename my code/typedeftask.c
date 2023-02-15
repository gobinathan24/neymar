#include<stdio.h>
#include "typedef1.h"
void add(number,number);
void sub(number,number);
void mul(number,number);
void div(number,number);
int main()
{
	number a=20,b=30;
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	
}
void add(number a,number b) 
{
	number c;
    c=a+b;
	printf("\n%d",c);
}
void sub(number a,number b)
{
	number d;
	d=a-b;
	printf("\n%d",d);
}
void mul(number a,number b)
{
	number e;
	e=a*b;
	printf("\n%d",e);
}
void div(number a,number b)
{
	number g;
	g=a/b;
	printf("\n%d",g);
}
