#include<stdio.h>
char sum(char []);
int main()
{
	char string[50];//(*fun),(char[]);
	printf("enter the string:");
	gets(string);
	char(*ptr)(char[]);
     ptr=sum;
     ptr(string);
} 
char sum(char a[])
{
printf("the string is %s",a);
}
 
