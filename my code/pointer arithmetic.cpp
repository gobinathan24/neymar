#include<stdio.h>
int main()
{
	int g=10,o=8,b=7,i=5,r=0,s,k;
	int *p1,*p2,*p3,*p4;
	p1=&g,p2=&o,p3=&b,p4=&i;
	printf("\n%d",p1);
	printf("\n%d",p2);
	printf("\n%d",p3);
	printf("\n%d",p4);
	r=*p1+*p2;
	printf("\nresult=%d",r);
	p2++;  
	printf("\np2=%d",p2);
	p4--;
	printf("\np4=%d",p4);
	s=*p1 * *p2;
    printf("\ns=%d",s);
   k= *p1/ *p2;
   printf("\ndividsion=%d",k);
}
