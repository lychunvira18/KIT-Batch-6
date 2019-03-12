#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int checkUserChoice(int inp);
int checkUserInput(int inp);
int randNum();
int checkUserYesNo(char c);
int main()
{
	char c;
	int inp,score,gamesPlayed=0; 
	 // Random numbers with dice
		
	printf("Let's start the game! Type 1 for LOW and 2 for HIGH \n");
	
	do{
	printf("Score: %d \n",score);
	if(gamesPlayed>0)
	{
		printf("Type 1 for LOW and 2 for HIGH\n");
	}
	scanf("%d",&inp);
	
	checkUserInput(inp);//Making sure the user gave the right input
	checkUserChoice(inp); // Checking user choice 
	int diceRoll=randNum(); //Getting the random number or the dice roll 
	
	printf("The dice roll: %d \n",diceRoll); 
		
	if(inp==1)
	{
		if(diceRoll>3)
		{
			printf("You got it wrong +0!");
		}
		else
		{
			printf("You got it right! +1");
			score++;
		}
	}
	else
	{
		if(diceRoll>3)
		{
			printf("You got it right! +1");
			score++;
		}
		else
		{
			printf("You got it wrong +0");
		}
	}
		gamesPlayed++;
		printf("\nContinue? type y for yes and n for no!\n");
		fflush(stdin);
		scanf("%c",&c);
		fflush(stdin);
		checkUserYesNo(c);
	}while(c=='y');
	
	printf("\nTotal Score: %d Games Played: %d",score,gamesPlayed);
	return 0;
}

//Some list of functions 
//Checking users input
int checkUserChoice(int inp)
{
	if(inp==1)
		return printf("Your bet: Low, ");
	else
		return printf("Your bet: High, ");
}
//putting random numbers
int randNum(int a)
{
	srand(time(NULL));   
	a = (rand()%6)+1;
	return a;
}
//Checking whether if the number the user input is valid or not
int checkUserInput(int a)
{
	if(a!=1&&a!=2)
	{
		do{	
		fflush(stdin);
		printf("Invalid Choice!,Pick again! ");
		scanf("%d",&a);
		fflush(stdin);
	 	}while(a!=1&&a!=2);
	}
}
//Making sure that the user put is yes or no
checkUserYesNo(char c)
{
	while(c!='y'&&c!='n')	
	{
	printf("Invalid Choice!,Pick again! ");
	scanf("%c",&c);
	fflush(stdin);
	};
}

