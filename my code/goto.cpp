/*go
to*/

#include<stdio.h>
int main()
{
	int i=0;
	printf("hai");
	manfree:
	i++;
	if(i<=5)
		printf("%d\n",i);
		//if(i<=5)
		goto manfree;
	}
	
