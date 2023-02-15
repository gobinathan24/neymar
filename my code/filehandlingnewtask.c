#include <stdio.h>
 #include <stdlib.h>
  int main()
   { 
    int age,name[20];
	FILE *fptr;
	fptr = fopen("program.txt","r");  
  if(fptr == NULL)   
    {    
	printf("Error!");  		   
    exit(1);         
    } 
    fgets(name,20,fptr);
    puts(name);
    fscanf(fptr,"%d",&age);     
     printf("%d",age);
	fclose(fptr); 
  }

