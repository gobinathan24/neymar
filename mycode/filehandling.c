#include <stdio.h>
 #include <stdlib.h>
  int main()
   { 
    int num1,num2,num3;
	FILE *fptr;
	   fptr = fopen("program.txt","w");  
  if(fptr == NULL)   
    {    
		    printf("Error!");  
		   
  exit(1);         
 } 

     printf("Enter num: ");
     scanf("%d %d %d",&num1,&num2,&num3);     
      fprintf(fptr,"%d %d %d",num1,num2,num3); 
  }

