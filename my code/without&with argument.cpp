/* without return & with argument*/

#include<stdio.h>
void function(int,int);
int main()
{hg
//	int result;
//	printf("welcom to manfree");
function(5,6);
}

int function ()
{
	int x1,x2,c;
	printf("enter the value:");
	scanf("%d%d",&x1,&x2);
//	c=x1+x2;
	c=x1*x2;
	//return=x1+x2;
}
void function(int x1, int x2)
{
	printf("the result of:%d",x1+x2);
}
