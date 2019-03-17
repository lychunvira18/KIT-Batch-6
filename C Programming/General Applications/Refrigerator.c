//Here are just the sample. Please make it more complex.
#include<stdio.h>
int coca=1, beer=2, water=3;
int friedrice=4, soup=5, ice=6;
main()
{
	char in;
	int cho;
	ag:printf("Press D to open the Fridge: ");
	scanf("%c",&in);
	fflush(stdin);
	if(in=='D'||in=='d')
	{
		printf("1. Coca\n2. Beer\n3. Water\n4. Fried Rice\n5. Soup\n6. Ice Cream\n");
	}
	else 
	{
		printf("Wrong input. Fridge wont open\n");
		goto ag; 
	}
	aga: printf("What do you want to take out?: ");
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:
			printf("You have taken Coca out");
			break;
		case 2:
			printf("You have taken Beer out");
			break;	
		case 3:
			printf("You have taken Water out");
			break;
		case 4:
			printf("You have taken Fried Rice out");
			break;
		case 5:
			printf("You have taken Soup out");
			break;
		case 6:
			printf("You have taken Ice Cream out");
			break;
		default:
			goto aga;			
	}
}

