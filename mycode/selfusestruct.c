#include<stdio.h>
struct profile
{
	int userid;
	char name[20];
};
int main()
{
	struct profile fb;
	scanf("%d \n%s",&fb.userid,&fb.name);
	printf("user id:%d\n name:%s",fb.userid,fb.name);
} 
