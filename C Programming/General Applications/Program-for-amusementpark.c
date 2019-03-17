#include<stdio.h>
int main()
{
	int cchoice,rchoice,fchoice,achoice,acchoice,total=0,price; 
	char ans;
	do{

	printf("----------Welcome To KIT Amusement Park----------\nHere are the available Rides and Places to visit in our Amusment Park\n");
	printf("1. Ride                    2. Resturant\n3. Thing to do             4. Accommodation\n");
	printf("-------------------------------------------------------------\nEnter your Choice: ");
	scanf("%d",&cchoice);
	if (cchoice == 1)
	{
		printf("1. Going to space with The Guardian of the Galaxy \n2. Transformer Rise of the Dark Knight(4DX) \n3. Going into the jungle with the Jumanji \n4. Into the Jurassic World \n5. Treasure in the Ancient Pyramid \n6. Skycraper RollerCoster\n7. Pirate of the Caribbean's Treasure\n8. Into the lap with Rick and Morty(4DX)\n9. Visit Spongebob\n");
		printf("--------------------------------------------------\nEnter the number of the ride: ");
		scanf("%d",&rchoice);
		if (rchoice == 1||rchoice == 3||rchoice == 9)
		{
			printf("Price: $15 per ride");
			price = 15;
		}
		else if(rchoice == 2||rchoice == 8)
		{
			printf("Price: $22 per ride (include glasses)");
			price = 22;
		}
		else if(rchoice == 4||rchoice == 5||rchoice == 7)
		{
			printf("Price: $18 per ride");
			price = 18;
		}
		else if(rchoice == 6)
		{
			printf("Price:$27 per ride");
			price = 27;
		}
		else
		{
			printf("Coming soon");
		}
	}
	else if (cchoice == 2)
	{
		printf("1. Italian Resturant\n2. Mexican Resturant\n3. Chinese Resturant\n4.Japanese food & Shushi Bar\n5. Pizza(no pineapple on it)\n6. FastFood Resturant\n7. Dessert Castle\n8. Wing Kingdom\n9. Indian Resturant");
		printf("\n----------------------------------\nEnter your Choice: ");
		scanf("%d",&fchoice);
		if (fchoice == 1||fchoice == 2)
		{
			printf("Average Price per meal $70-$120");
			price = 100;
		}
		else if(fchoice == 3||fchoice == 9)
		{
			printf("Average Price per meal $55-$70");
			price = 60;
		}
		else if (fchoice == 5||fchoice == 6||fchoice == 8||fchoice == 7)
		{
			printf("Average Price per meal $30-$40");
			price = 35;
		}
		else if (fchoice == 4)
		{
			printf("Average Price per meal $220-$500");
			price = 350;
		}
		else 
		{
			printf("More Resturant Coming soon");
		}
	}
	else if (cchoice == 3)
	{
		printf("1. Join the Mosquitoes event\n2. Eating Corndog Contest\n3. Suana & Spa\n4. Yoga\n5. Attend Anime drawing class\n6. Taking Picture with your favorite Character from MCU\n");
		printf("-----------------------------\nEnter your choice: ");
		scanf("%d",&achoice);
		if (achoice == 1||achoice == 6)
		{
			printf("This event is free to join");
			price = 0;
		}
		else if (achoice == 3||achoice == 4)
		{
			printf("Price: $12 per person");
			price = 12;
		}
		else if (achoice == 2)
		{
			printf("Enter price: $8per person and the winner will get $150 voucher");
			price = 8;
		}
		else if (achoice == 5)
		{
			printf("Free Entery Your Picture will be display if it can get the perfect score");
		}
		else 
		{
			printf("Coming soon");
		}
	}
	else if (cchoice == 4)
	{
		printf("1. Holiday Home\n2. Single room with queen size bed(for one person)\n3. Single room with king size bed(for 2 person)\n4. Double room\n5. Triple room\n6. Bungalow\n 7. Holiday Villa");
		printf("\n---------------------------------------------\nEnter your Choice: ");
		scanf("%d",&acchoice);
		if (acchoice == 1)
		{
			printf("Price: $90 per day");
			price = 90;
		}
		else if (acchoice == 2)
		{
			printf("Price: $45 per day");
			price = 45;
		}
		else if (acchoice == 3)
		{
			printf("Price: $65 per night");
			price = 65;
		}
		else if (acchoice == 4)
		{
			printf("Price: $75 per night");
			price = 75;
		}
		else if (acchoice == 5||acchoice == 6)
		{
			printf("Price: $85 per night");
			price = 85;
		}
		else if (acchoice == 7)
		{
			printf("Price: $450 per night\n       $1200 per week");
			price = 450;
		}
	}
	else
	{
		printf("Invalid Choice");
		price = 0;
	}
	printf("\nDo you want more(y/n): ");
	scanf("%s", &ans);
	total+=price;
}while(ans=='y'||ans=='Y');
	printf("Total: $%d",total);
	return 0;
}
