#include<stdio.h>
int add(int []); //with return with argu
void sub();       //without return without argu
int mult();        //with return without argu
int m;
void divi(int []);  //without return with argu
int main()
{
	int i, n,m,A[100];
	printf("enter the operator:\n1.addition\n2.subraction\n3.multiply\n5.division\n6.exit");
	scanf("%d",&n);
switch (n)
 {
	case 1:
		 printf("enter the number:");
	/*	 scanf("%d",&m);
		 int k;
		for(i=0;i<m;i++)
		{
			scanf("%d",&A[i]);
			//A[i];
		}*/
		add(A);
	//	printf("%d",add(A));
		break;
    case 2:
    	//printf("hello");
    	sub();
    	break;
    case 3:
    	printf("%d",mult());
    	break;
    case 4:
    	divi(n[]);
    	break;
 }
}
int add(int A[])
 {	
	int sum,i,m,a[10];
	//printf("enter the number to add:");
	sum=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
	scanf("%d",&A[i]);
    }
	sum=sum+A[i];
	printf("%d",sum);
	return sum;		
 }
void sub()
{
	int i,k,gob,b[i];
	gob=0;
	printf("enter the number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	scanf("%d",&b[i]);
	}
	gob=b[0];
	for(i=1;i<k;i++)
	{
	gob=gob-b[i];
     }
	printf("%d",gob);
}
int mult()
{
	int i,g,d[10],mob,n;
	printf("enter the number  :");
    scanf("%d",&g);
	for(i=0;i<g;i++)
	{
		scanf("%d",&d[i]);
	}
	mob=d[0];
	for(i=1;i<g;i++)
	{
		mob=mob*d[i];
    }
   // printf("%d",mob);
	return mob;
}
void divi(int n[])
{
	int r,res,f[50],n[50],i;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	f[i]=n[i];
	res=n[0];
	for(i=0;i<r;i++)
	res=res/f[i];
	return res;
	
}