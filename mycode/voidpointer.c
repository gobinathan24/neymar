#include<stdio.h>
void *pointer ;
 void main()
{
	void *ptr;
	int a=10;
	char b='f'; 
	float c=5.5;
	ptr =&a;
	printf("%d",*(int*)ptr);
	ptr=&b;
	printf("\n%c",*(char*)ptr);
	ptr=&c;
	printf("\n%f",*(float*)ptr);	
}
