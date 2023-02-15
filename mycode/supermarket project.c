/*
	Name:gobi 
	Copyright: 
	Author: 
	Date: 30-01-23 01:16
	Description:super market project 
*/
#include<stdio.h>

int main()
{
	int products ,n,kgscount,total=0;
	printf("\t\t\t\t\t ***welcome to GOBI super market*** ");
	printf("\n\nlist of products\n1.fruits 2.vegitables 3.cookies 4.chocholate 5.exit \nselect product: ");
	scanf("%d",&products);
	switch(products)		
       	{
		case 1:
		printf("\n1.apple=60rs/kg 2.banana=70rs/kg 3.orange=80rs/kg 4. jackfruit=50rs/kg\nselect items:");
		scanf("%d",&n);if(n==1)
		{
			printf("\nhow many kgs of apple you need sir");
			scanf("%d",&kgscount);
			total=60*kgscount;
			printf("\ntotal amount of apple:%d",total);
			} 
	    else if(n==2)
	    case 2:
	    {
	     	printf("\nhow many kgs of banana you need sir");
	    	scanf("%d",&kgscount);
	    	total=70*kgscount;
	    	printf("\ntotal amount of banana:%d",total);
			}
	    else if(n==3)
	    {
	    	printf("\nhow many kgs of orange you need sir");
	    	scanf("%d",&kgscount);
	    	total=70*kgscount;
	    	printf("\ntotal amount of orange :%d",total);
		}
		else if(n==4)
		{
			printf("\nhow many kgs of jackfruit you need sir");
	    	scanf("%d",&kgscount);
	    	total=70*kgscount;
	    	printf("total amount of jakfruit:%d",total);
		} 
	    	
			
	}
}
