#include<stdio.h>
void euroToDollars(float euro);
int main()
{
	int euroAmounts;
	
	printf("Enter Euro Amounts: ");
	scanf("%d",&euroAmounts);
	euroToDollars(euroAmounts);
	
	return 0;
}

void euroToDollars(float euro)
{
	float dollar = euro*1.37;
	printf("\nEuro:%.2f-Dollar:%.2f",euro,dollar);
	return;
}
