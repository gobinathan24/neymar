#include <stdio.h>
 #include <stdlib.h>
  int main()
   { 
    int age,name[20];
	FILE *fptr;
	fptr = fopen("neymao.txt","w+");  
  if(fptr == NULL)   
    {    
	printf("Error!");  		   
    exit(1);         
    } 
    printf("enter the name :");
      gets(name);
    printf("enter the age :");
    scanf("%d",&age);
	//  puts(name);
      fprintf(fptr,"%s\n%d",name,age);
    fgetc(fptr);
    fclose(fptr);
   /*
   scanf("%d",&age);
    fgets(name,20,fptr);
    puts(name);
    fscanf(fptr,"%d",&age);     
     printf("%d",age);
	fclose(fptr);*/ 
	return 0;
  }

