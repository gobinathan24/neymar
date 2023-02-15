/*
	Name: gobi
	Date: 08-02-23 10:26
	Description:user/location/formte 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char buffer[400];
	char user_name[50];
	char location[60]; 
	puts("enter the name");
	gets(user_name);
	char formate[50]=".txt";
	sprintf(buffer,"%s%s",user_name,formate);
	printf("%s",buffer);
		FILE *fptr; 
  if(fptr == NULL)   
    {    
	printf("Error!");  		   
    exit(1);
	}
	puts("enter your location:");
	gets(location);
	puts(location);
}
