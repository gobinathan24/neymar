#include<stdio.h>
struct details
{
	char student_name[20];
	int student_age;
};
int main()
{
	struct details a[50];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",&a[i].student_name);	
	}
	for(i=0;i<5;i++)
	{
		printf("*%s\n",a[i].student_name);
	}	
}
