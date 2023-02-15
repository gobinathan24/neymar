/*
	Name:gobi 
	Copyright:-- 
	Author: nan dha
	Date: 27-01-23 00:52
	Description: pointer incre ment and decrement
*/
#include<stdio.h>
int main()
{
	int a[]={2,4,6,8};
	int *p;
	p=a;
	printf("\nthe first index num value is:%d",*p);
	printf("\nthe post increment value is:%d",*p++);
	printf("\nthe increment  value is:%d",*p);
	printf("\nthe pre increment  value is:%d",*++p);
	printf("\nthe post decrement value is:%d",*p--);
	printf("\nthe decrement value is:%d",*p);
	printf("\nthe pre decrement value is:%d",*--p);
	printf("\nthe pre increment in pointer value is:%d",++*p);
	printf("\nthe decrement in pointer is:%d",--*p);
}

