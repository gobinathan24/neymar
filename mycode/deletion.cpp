/*array insert*/

#include<stdio.h>
int main()
{
	int element,position,num[50],i,n;
	printf("enter the num");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("enter the  and postion=");
	scanf("%d",&position);
	position=position-1;
	for(i=position;i<n-1;i++)
	{
		num[i]=num[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",num[i]);
	}
}
