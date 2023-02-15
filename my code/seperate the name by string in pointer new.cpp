/*
	Name: 
	Copyright: 
	Author: 
	Date: 27-01-23 22:44
	Description: 
*/
#include<stdio.h>
void string(char *);
int main()
{
	int i;
	char *ptr;
	char arr[50];
	printf("enter the string character:");
	for(i=0;arr[i-1]!=10;i++)
	{
		scanf("%c",&arr[i]);
	}
	arr[i-1]=00;    
	ptr=arr;
	string(&arr);	
}
void string(char *sj)
 {
 	int i;
 //	char str1[50];
 	printf("1st str value:");
 	for(i=0;sj[i-1]!=32;sj++)
 	printf("%c",*sj);
 	printf("\n2nd str value:");
 	while(sj[i-1]=32)
 	{
 		printf("%c",*sj);
 		sj++;
 		if (sj[i-1]=='\0')
 		break;
	 }
 }
