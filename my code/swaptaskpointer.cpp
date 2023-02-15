#include<stdio.h>
int gobi(int ,int );
int main()
{
	int x=10,y=20,*p1,*p2;
	int c=0;
	p1=&x;
	p2=&y;
	c=gobi( x, y);
	printf("\nvalue of c:%d",c);
	printf("\naddress of c:%d",&c);
	printf("\nvalue of a:%d",x);
	printf("\naddress of a:%d",&x);
	printf("\nvalue of c:%d",y);
	printf("\naddress of c:%d",&y);
}
int gobi(int a,int b)
{
	int d;
	d=a+b;
	return d;
}

