#include<stdio.h>
#include "typedef1.h"
void add(number,number);
void sub(number,number);
void mul(number,number);
void div(number,number);
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
