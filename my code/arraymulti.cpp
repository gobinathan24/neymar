/*array multi*/

#include<stdio.h>
int main ()
{
	int x[10][10],y[10][10],z[10][10],i,j,k;
	int  xr,xc,yr,yc;
	printf("print the 1st row and coloum");
	scanf("%d%d",&xr,&xc);
	printf("print the 2nd row and coloum");
	scanf("%d%d",&yr,&yc);
	if (xc==yr)
	
	 {
	 	printf("print the  1st matrix");
	 	for(i=0;i<xr;i++)
	 	{
	 		for(j=0;j<xc;j++)
	 		{
	 			scanf("%d",&x[i][j]);
			 }
	    }
			 printf("print the 2nd matrix");
			 for(i=0;i<yr;i++)
			 {
			 	for(j=0;j<yc;j++)
			 	{
			 		scanf("%d",&y[i][j]);
				 }
		    }
				 for(i=0;i<xr;i++)
				 {
				 	for(j=0;j<yc;j++)
				 	{
				 		z[i][j]=0;
				 		for(k=0;k<yr;k++)
				 		{
				 			z[i][j]=x[i][k]*y[k][j]+z[i][j];
						 }
				 		printf("  %d",z[i][j]);
					 }
					 printf("\n");
				 }
				
		 
	 }
	
}
