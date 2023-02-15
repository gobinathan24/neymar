/*
	Name: gobi
	Copyright: 
	Author: nan dha
	Date: 27-01-23 02:43
	Description:use string in pointer 
*/
#include<stdio.h>
void baba(char*);
int main()
{
	char*p;
	int i;
	char name[50];
	for(i=0;name[i-1]!=10;i++)
	scanf("%c",&name[i]);
	p=name;
	baba(&name[i]);
//	name[i-1]='\0';
//	printf("%s",name);
	puts(name);

}
void baba(char *g)
{
	for(;*g;g++)
	printf("%c",*g);
}

