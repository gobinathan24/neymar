#include<stdio.h>
struct gobi
{
	char name;
	int age;
}gobi;
int main()
{
	scanf("%c %d",&gobi.name,&gobi.age);
	printf("%c %d",gobi.name,gobi.age);
}
