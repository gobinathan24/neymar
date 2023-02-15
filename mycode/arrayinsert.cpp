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
	printf("enter the element and postion=");
	scanf("%d%d",&element,&position);
	position=position- 1;
	for(i=n-1;i>=position;i--)
	{
		num[i+1]=num[i];
	}
	num[position]=element;
	for(i=0;i<=n;i++)
	{
		printf("%d",num[i]);
	}
}
