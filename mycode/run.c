#include<stdio.h>
int main()
{

	int arr1[7]={1,2,3,4,5};
	int arr2[7]={6,7,8,9,0};	
	int arr3[7]={2,4,6,8,0,};
	int *ptr1,*ptr2,*ptr3; 
	ptr1=arr1;
	ptr2=arr2;
	ptr3=arr3;
	printf("%d\n",*arr1+1);
	printf("%d",*(arr2+1));
	 
}
