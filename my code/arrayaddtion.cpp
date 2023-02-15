/* array 
addtion*/
/*array addtion*/

#include<stdio.h>
int main()

{
	int x[3][3],y[3][3],z[3][3],i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the first matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{ 
			printf("%d",z[i][j]);
		}
		printf("\n");
	}
} 
