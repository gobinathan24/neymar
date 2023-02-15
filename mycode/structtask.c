#include<stdio.h>
struct gobi
{
	int student_age;
	int student_date;
};
int main()
{
	struct gobi go;
	scanf("%d",&go.student_age);
	printf("%d",go.student_age);
	//scanf("%d %d",&book1.name,&book2.name);
	//printf("%d %d",book1.name,book2.name);
}
