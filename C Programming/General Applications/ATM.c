/*Program to Output the account balance after the attempted transaction, given as a number with two digits of precision.If not enough than output current balance*/
/*Input: amount which person want to withdraw and initial balance*/
/*Conditions: withdraw only if amount to withdraw is multiple of 5 and for each withdrawl charges 0.50*/
#include<stdio.h>
#include<conio.h> // conio.h header file called for
int card(); //function declaration
int input();
float balance; //global variable
int inp;
int main()
{
	printf("Enter your balance: $");
	scanf("%f",&balance);
	input();
	getch();
	return 0;
}
int input()
{
	printf("You will be charged $0.50 per withdrawal\n");
	printf("Choose the amount you want to withdraw\n");
	printf("1. $5				2. $10\n");
	printf("3. $20				4. $50\n");
	printf("5. $100				6. $500\n");
	printf("7. $1000			8. Custom\n");
	scanf("%d",&inp);
	if(inp>0&&inp<9)
	{
		card(); //if the condition is true then this will call the card() function.
	}
	else //if the user input other than 1 to 8 they will have to input again.
	{
		printf("Wrong input. Please choose again.\n\n");
		input();
	}
}
int card() 
{
	char dec; 
	float with;
	if (inp==1&&balance>=5.50)
	{
		printf("You have withdrawed $5 from your account.\n");
		balance-=5.50;
		printf("Balance: $%.2f",balance);
	}
	else if (inp==2&&balance>=10.50)
	{
		printf("You have withdrawed $10 from your account.\n");
		balance-=10.50;
		printf("Balance: $%.2f",balance);
	}
	else if (inp==3&&balance>=20.50)
	{
		printf("You have withdrawed $20 from your account.\n");
		balance-=20.50;
		printf("Balance: $%.2f",balance);
	}
	else if (inp==4&&balance>=50.50)
	{
		printf("You have withdrawed $50 from your account.\n");
		balance-=50.50;
		printf("Balance: $%.2f",balance);
	}
	else if (inp==5&&balance>=100.50)
	{
		printf("You have withdrawed $100 from your account.\n");
		balance-=100.50;
		printf("Balance: $%.2f",balance);
	}
	else if (inp==6&&balance>=500.50) // used to be 200 instead of 500 which was wrong
	{
		printf("You have withdrawed $500 from your account.\n");
		balance-=500.50;
		printf("Balance: $%.2f",balance);
	}
	else if (inp==7&&balance>=1000.50) // used to be 500 instead of 1000 which was wrong
	{
		printf("You have withdrawed $1000 from your account.\n");
		balance-=1000.50;
		printf("Balance: $%.2f",balance);
	}
	else if (inp==8)
	{
		printf("The amount you want to withdraw: $");
		scanf("%f",&with);
		printf("You have withdrawed $%.2f from your account.\n",with);
		balance-=with;
		printf("Balance: $%.2f",balance);
	}
	else //when you want to withdraw more than the amount you have
	{
		printf("Insufficient amount\n");
		printf("Current balance: $%.2f\n",balance);
	ques:printf("Still want to withdraw? Y/N: "); 
		scanf(" %c",&dec);
		if(dec=='Y'||'y') input();
		else if(dec=='N'||'n') return 0; 
		else goto ques;
	}
}
