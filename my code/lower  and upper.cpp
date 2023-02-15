#include<stdio.h>
int main()
{
	char name[20];
	int i;
	printf("enter the string ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	
	{
		name[i]=name[i]-32;
		
	}
	printf("lower case is %s",name);
}
