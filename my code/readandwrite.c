 #include <stdio.h>
 #include <stdlib.h>
  int main()
   { 
     char employee_name[60],lastname[50];
    int employee_id;
    float salary;
    
	FILE *fptr;
	fptr = fopen("readandwrite.txt","w");  
  if(fptr == NULL)   
    {    
	printf("Error!");  		   
    exit(1);         
    } 
    printf("enter the employee name :");    
    gets(employee_name);
    printf("enter the employee id :");
    scanf("%d",&employee_id);
    printf("enter expected salary");
    scanf("%f",&salary);
    getchar();
    puts("enter the last name:");
    gets(lastname),
      fprintf(fptr,"%s\n%d\n%f\n%s",employee_name,employee_id,salary,lastname);
    fgetc(fptr);
    fclose(fptr);                          //reading function
   fptr=fopen("readandwrite.txt","r"); 
	if(fptr==NULL)
	{
		printf("ERROR");
		exit(1);
	  }  
	  char name[60],address[70];
	  int age;
	  float height;
	  fgets(name,60,fptr);
	  puts(name);
	  fscanf(fptr,"%d",&age);
	  printf("%d\n",age); 
	  fscanf(fptr,"\n%f",&height);
	  printf("%f",height);
	 fputc(address,fptr);
	  fgets(address,50,fptr);
	  puts(address);
	 fclose(fptr);
}
