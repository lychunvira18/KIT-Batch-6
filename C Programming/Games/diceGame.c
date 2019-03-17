#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int load_game();

void start_game(int gamesPlayed);
char get_user_input();
char check_user_input(char input); //check user input1
int generate_random_number();
int game_logic(char input,int randomNumber,int score);//main game logic
char continue_playing();
char check_user_input2(char input2); //user input2


int main()
{
	load_game();
	return 0;
}

int load_game()
{
	int gamesPlayed=0,randomNumber,score=0;
	char input,input2;
	do
	{
		start_game(gamesPlayed);
		input=get_user_input();
		input=check_user_input(input);
		randomNumber=generate_random_number();
		score=game_logic(input,randomNumber,score);
		
		input2=continue_playing();
		input2=check_user_input2(input2);
		gamesPlayed++;
	}while(input2=='y');
	printf("\ngames played: %d \nscore: %d",gamesPlayed,score);	
}
void start_game(gamesPlayed) //games start, top menu
{
	if(gamesPlayed==0)
		printf("Let's start the game!\nType l for low, h for high (l/h) ");
	else
		printf("Type (l/h)\n");
}
char get_user_input() //storing user input l or h
{
	char input;
	scanf("%c",&input);
	fflush(stdin);
	return input;
}
char check_user_input(char input) //making sure that the use input is either l or h
{
	while(input!='l'&&input!='h')
	{
		printf("invalid choice, enter again : ");
		scanf("%c",&input);
		fflush(stdin);
	}
	return input;
}
int generate_random_number() //generating a random number for the dice
{
	int randomNumber;
	srand(time(NULL));
	randomNumber=(rand()%6)+1;
	printf("dice roll:%d",randomNumber);
	return randomNumber;
}
int game_logic(char input,int randomNumber,int score) // complete game logic
{
	if(input=='l')
	{
		if(randomNumber<4)
		{
			printf("\n+1");
			score++;
			return score;
		}
		else
			printf("\n+0");
			return score;
	}
	else
	{
		if(randomNumber>3)
		{
			printf("\n+1");
			score++;
			return score;
		}
		else
			printf("\n+0");	
			return score;
	}
}
char continue_playing() //Store in user input2 yes or no
{
	char input2;
	printf("\ncontinue? (y/n) ");
	scanf("%c",&input2);
	fflush(stdin);
	return input2;
}

char check_user_input2(char input2) //making sure that the input is y or n
{
	while(input2!='y'&&input2!='n')
	{
		printf("invalid choice, enter again : ");
		scanf("%c",&input2);
		fflush(stdin);
	}
	return input2;
}

