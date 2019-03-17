#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int game();
int playerScore=0, botScore=0, rematch, choice, ran;
int checkingRematch();
int main()
{
	printf("Player: %d \t \t \t \t \t \t \t BOT: %d\n",playerScore,botScore);
	game();
}
int game()
{
	printf("Picks your choice: 1=Rock, 2=Paper, 3=Scissors: ");
	scanf(" %d",&choice);
	
	if (choice==1)
	{
		printf("You pick Rock.\n");	
	}
	else if (choice==2)
	{
		printf("You pick Paper.\n");
	}
	else if (choice==3)
	{
		printf("You pick Scissors.\n");	
	}
	else 
	{
		printf("Wrong input. Please choose again.\n");
		game();
	} 
	
	srand(time(NULL));
	ran = rand()%3+1;
	switch(ran)
	{
		case 1:
		printf("Bot picks Rock.\n");
		break;
		case 2:
		printf("Bot picks Paper.\n");
		break;
		case 3:
		printf("Bot picks Scissors.\n");
		break;	
	}
	
	if (choice==ran)
	{
		printf("--------------------------------------------------The Match Is Draw----------------------------------------------------\n");
		puts("");	
		printf("Player: %d \t \t \t \t \t \t \t BOT: %d\n",playerScore,botScore);
	}	
	else if (choice==1&&ran==2 || choice==2&&ran==3 || choice==3&&ran==1)
	{
		printf("-------------------------------------------------------You LOSE!--------------------------------------------------------\n");
		puts("");
		botScore++;
		printf("Player: %d \t \t \t \t \t \t \t \t BOT: %d\n",playerScore,botScore);
	}
	else
	{
		printf("-------------------------------------------------------You WIN!---------------------------------------------------------\n");
		puts("");
		playerScore++;
		printf("Player: %d \t \t \t \t \t \t \t \t BOT: %d\n",playerScore,botScore);
	}
	checkingRematch();
}
int checkingRematch()
{
	printf("\nDo you want to have a rematch? (Yes=1/No=0): ");
	scanf(" %d",&rematch);
	puts("");
	if (rematch==1)
	{
		game();
		return 0;
	}
	else if (rematch==0)
	{
		return 0;
	}
	else 
	{
		printf("The given input is incorrect.");
		return checkingRematch();	
	}
}
