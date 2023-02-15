#include<stdio.h>
struct details
{
	char name[20];
	int id;
	float salary;
	int experience;
};
void main ()
{
	int i;
	struct details employeeid[50];
	struct details *ptr=&employeeid;
	printf("\t\t\t\t\t\t***enter employee details***");
	for(i=0;i<3;i++)
	{ 
	printf("\nenter name:");
	scanf("%s",&employeeid[i].name);
	printf("enter employee id:");
	scanf("%d",&employeeid[i].id);
	printf("expecting salary:");
	scanf("%f",&employeeid[i].salary);
	printf("years of experience:");
	scanf("%d",&employeeid[i].experience);
	}
	for(i=0;i<3;i++,ptr++)
	{
	printf("\nname :%s",ptr->name);
	printf("\nemployee id :%d",ptr->id);
	printf("\nslary :%f",ptr->salary);
	printf("\nexperience :%d\n\n",ptr->experience);
   }
} 
