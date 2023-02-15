/* count the letter*/
#include<stdio.h>
int main ()
{
	int i,count,n;
	count=0;
	char input[20];
	printf("enter the string:");
	gets(input);
	puts(input);
	printf("enter the letter:");
	scanf("%c",&n);
	for (i=0;i<input[i];i++)
  {   
	  if(n==input[i])	
	{
		count++;
		printf("\nthe index %d",i);
		
	}
   }
   printf("\nthe count is:%d",count);
	
}
