

#include<stdio.h>
 int manfree(int,int);
int main ()
{
	int result,c;
	printf("hello everyone ");
    result =manfree(5,6);
//	result=manfree;
	printf("%d ",result);
}
int manfree (int y,int m)
{
	int c=0;
	c=y+m;
	return c;	
 }
