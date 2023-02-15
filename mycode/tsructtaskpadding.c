#include<stdio.h>
//#pragma pack()
union  abc              //size edu peruso adhu dha size  alocate agum inga double dha perusu
{
	int a;
	char b;
	float c;
	double d;
};
int main ()
{
	union abc A;
	printf("%d ",sizeof A);
	//scanf("%d",&);
	//printf("%d",);
} 
