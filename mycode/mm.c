#include<stdio.h>
int main()
{
	int i,j,x={1,2,3,4,5,6,7,8},y={4,5,6,7,8,9,0,},z={7,8,9,0,1,3,4};
	int *p[3];
	p[0]=&x;
	p[1]=&y;
	p[2]=&z;
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		printf("\tvalue:%d\n",i,*(p[0])+j);
		printf("\n%d\taddress:%d",i,p[i]+j);
	     }
	}
}
