#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter the value");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i == 0)
		flag++;
	}
		  if (flag==0)
		{
			printf("it is prime number");
		}
		else 
		{
				printf("it is not prime number");
		}	
	}


