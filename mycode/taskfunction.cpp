#include<stdio.h>
 
int add();
//int sub();
//int mult();
//int div();
//int mod();
 {
int main()
  {
	int operator;
	goto1:
	printf("enter the operator:\n 1.addtion 2.subraction 3.multiplication 4.division 5.modules 6.exit");
	scanf("%d",&operator);

	
	switch(operator)
	{
	case 1:
		add(); 
		printf("%d",add());
		break;
    case 2:
    	sub();
    	
	}
  }
int add()
 {
	int sum,i,n,a[10];
	sum=0;
	printf("how many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sacanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
	return sum;
  }
 }
