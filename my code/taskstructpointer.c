#include<stdio.h>
struct abc
{
	int a;
	char b;
	float c;
};
main()
{
	struct abc s1={32,'d',6.8};
	struct abc *ptr=&s1;
	printf("%d \n%c \n %f",ptr->a,ptr->b,ptr->c);
} 
