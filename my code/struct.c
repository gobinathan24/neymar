#include<stdio.h>
 struct institute
  { 
  char staff_name;
   int staff_age;
   float staff_height;
    }
	manfree;
 void main()
 {
 	
     manfree.staff_name='a';
     manfree.staff_age=10;
     manfree.staff_height=170;
	 printf("staff name is %c \n", manfree.staff_name); 
	 printf("staff age is %d", manfree.staff_age);
	 printf("\nsize of:%f",sizeof manfree);
	  printf("\nstaff height is %d",sizeof manfree.staff_height);
	  
 } 
