/* gobi
 9/1/23
 nested  loop*/
 
 #include<stdio.h>
 
 int main ()
 {
 	int i,j,n;
 	printf("enter the num:");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=i;j++)
 		if(i%2==0)
 		{
 			printf("0");
		 }
		 else
		 {
		 	printf("1");
		 }
		 printf("\n");
	}
	    printf("loop exit");
 }
