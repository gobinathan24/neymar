   /*name :gobinathan.s
project :REAL TIME ATM MACHINE*/
#include<stdio.h> 
unsigned long amount=2000, deposition, withdrawal;
int pin, choice, k; // required variables in the transaction
char transaction ='y';
void main()
{
while ((pin != 2025)&&(pin !=2424)) // Using while loop to check for the condition on a pin number matching
{
	system("color 90");
	printf("\t\t\t\t\t***WELCOME TO ATM SERVICE***\n\n");
printf("\nenter pin number:");
scanf("%d", &pin);
if ((pin != 2025)&&(pin !=2424));// Checking if the pin number types by the user is matched with the database record or not
// system("cls");
//printf("\n\nWRONG PIN RE-ENTER correct PIN");
}
do
{ 
printf("\t\t<1> Balance Checking \t\t\t\t\t\t<2> Cash Withdrawal\n\n");
printf("\n\t\t<3> Cash Deposition\t\t\t\t\t\t<4> Exit\n\n\n");
printf("Please proceed with your choice: ");
scanf("%d", &choice);  
system("cls");
switch (choice)
{
case 1:
printf("\n The account balance in Rs : %lu ", amount);
break;
case 2:
printf("\n enter the amount to be withdrawal: ");
scanf("%lu", &withdrawal);
if (withdrawal % 100 != 0)
{
printf("\n You are requested to enter the amount in multiples of 100");
}
else if (withdrawal >(amount - 500))
{
printf("\n  insufficient balance");
}
else
{
amount = amount - withdrawal;
printf("\n\n You can collect the cash now\n"); // after having a sufficient amount in the account the ATM machine will provide the cash amount.
printf("\n The current balance is%lu", amount);
}
break;
case 3:
printf("\n enter the amount to  deposite");
scanf("%lu", &deposition);
amount = amount + deposition;
printf("The balance is %lu", amount); 
break;
case 4:
printf("\n THANKS for USING our ATM services!");
break;
default:
printf("\n  invalid choice"); 
}
printf("\n\n\n Would you like to have another ATM transaction?(y/n): \n");
fflush(stdin);
scanf("%c", &transaction);
if (transaction == 'n   '|| transaction == 'N')
k = 1;
} while (!k);
printf("\n\n Thank you so much for your time to choose  our ATM services!");
}
