/*average mark
array*/

#include<stdio.h>

int main() 
{
	int i,j;
	 float a[5],b[5],sum1=0,sum2=0,average1,average2;
	 for(i=0;i<5;i++)
	 {
	 printf("enter vj mark:");
	 scanf("%f",&a[i]);
	 }
	 for(i=0;i<5;i++)
	 {
	 	sum1=sum1+a[i];
	 }
	 printf("total vj mark:%f",sum1);
	 average1=sum1/5;
	 printf("\n average  vj mark: %f",average1);
	  
	  for(j=0;j<5;j++)
	 {
	 	printf(" enter ak mark:");
	 	scanf("%f",&b[i]);
	  }
	  for(j=0;j<5;j++)	
	  {
	  	sum2=sum2+b[i];
	   } 
	   printf(" total ak mark:%f",sum2);
	   average2=sum2/5;
	   printf("\n avreage ak mark:%f",average2);
	   
}
