#include<stdio.h>
int main ()
{ 
	int i;
	char string [20]="apple";
	char result[20];
//	clrscrn();
	for(i=0;string[i]!='\0';i++)
	result[i]= (string[i]);
	printf("input string:%s\n",string);
	printf("input string :%s",result);
	printf("lowercase string : %s\n",result);
	return 0;
}
