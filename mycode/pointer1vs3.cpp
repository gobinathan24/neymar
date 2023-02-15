/*
	Name: gobi
	Copyright: 
	Author: 
	Date: 26-01-23 03:39
	Description:task
*/
#include<stdio.h>
int main()
{
int a=2,b=4,c=6;
int *p;
p=&a;
p=&b;
p=&c;
printf("value of A,B,C:\n%d\n%d\n%d",*p,*p++,*p++);
printf("\naddress of a:%d",&a);
printf("\naddress of b:%d",&b);
printf("\naddress of c:%d",&c);
printf("\naddress of p:%d",&p);
}
