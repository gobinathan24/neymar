#include<stdio.h>
int main()
{
	int i,j,x={1,2,3},y={4,5,6},z={7,8,9};
	int *p[3];
	p[0]=&x;
	p[1]=&y;
	p[2]=&z;
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		printf("\tvalue:%d\n",i,*(p[i])+j);
	     }
	     {
				printf("\n%d\taddress:%d",i,p[i]+j);
			}

	}
}
