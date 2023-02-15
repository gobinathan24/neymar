/*
	Name: 
	Copyright: 
	Author: 
	Date: 28-01-23 02:47
	Description: 
*/
#include<stdio.h>
int gobi(int *,int *);
int main()
{
	int i,A[60],B[60];
	int *a,*b;
	printf("enter the first matrix");
	for(i=0;i<4;i++)
	{
	
	scanf("%d",A[i]);
    }
	printf("enter the secaond matrix");
	for(i=0;i<4;i++)
	{
	
	scanf("%d",B[i]);
    }   
	a=A;
	b=B;
	 gobi(&A,&B);
}
int gobi( int *x,int *y)
{
	printf("\n\t%d",(*x+*y));
	printf("\t%d",((*++x)+(*++y)));
	printf("\n\t%d",((*++x)+(*++y)));
	printf("\t%d",((*++x)+(*++y)));	
}
