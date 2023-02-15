#include<stdio.h>
   int main ()
   {
	int i,count,sum,chara,num;	
	char name [10];
//	count=0;
//	sum=0;
//	chara=0;
//	num=0;
	gets(name);
	puts(name);
	for (i=0;name[i];i++)
	{
		if(name[i]>=65&&name[i]<=90)
		{
			count++;
		}
		if(name[i]>=98&&name[i]<=122)
	    {
			sum++;
		}
		if(name[i]>=33&&name[i]<=64)
		{
			chara++;
		}
		if(name[i]>=48&&name[i]<=57)
		{
			num++;
		}
	}
	printf("%d capital:",count);
	printf("%d small:",sum);
	printf("%d character:",chara);
	printf("%d number:",num);
}
