 
 #include<stdio.h>
 int main()
 {
 	int i;
	char name [20];
	for (i=0;name[i-1]!=10;i++)
	{
		scanf("%c",&name[i]);
		
	 } 
 	name[i-1]='\0';
 //	printf("%d",i-1);
 	puts(name);
 	printf("%d",i-1);
 }
