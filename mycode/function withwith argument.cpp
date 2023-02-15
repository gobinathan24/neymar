

#include<stdio.h>
 int manfree(int,int); // function decleration and ,int,int=parameter
int main ()
{
	int result,c;
	printf("hello everyone ");
    result =manfree(5,6);
	printf("%d ",result);
}
int manfree (int y,int m)//function argument
{
	int c=0;
	c=y+m;
	return c;	
 }
