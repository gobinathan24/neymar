#include<stdio.h>
void main ()
{
	int i,rem,rev=0;
	printf("enter the number");
	scanf("%d",&i);
	rem=i;
	while(rem >0)
	{
		rev=rev*10;
		rev=rev+(rem%10);
		rem=rem/10;
	}
printf(" revers number:%d",rev);
getch();	
}
