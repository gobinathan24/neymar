#include <stdio.h>
 #include <stdlib.h>
  int main() 
  {
   int* ptr ,n , i;
     printf("Enter number of elements:");  
     scanf("%d",&n);   
	 ptr = (int*)malloc(n*sizeof(int));          
	if (ptr == NULL)     // Dynamically allocate memory using malloc()   
      {     
	      printf("Memory not allocated.\n"); 
		    exit(0);    
      }             
else 
 {  
  printf("Memory successfully allocated using malloc.\n");   
    for (i = 0; i < n; ++i)         
	    ptr[i] = i + 1; 
 
  printf("The elements of the array are:"); // Print the elements of the array     for (i = 0; i < n; ++i)             printf("%d, ", ptr[i]);  } 
    for (i = 0; i < n; ++i)
	   printf("%d",ptr[i]);
     free(ptr); 
    ptr=NULL; 
    printf("\n%d",ptr);
	  return 0;
	  }
	  } 
