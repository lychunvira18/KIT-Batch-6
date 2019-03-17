#include <stdio.h>
#include<stdlib.h>

void game();
void choice();
void board();
int winCheck();
char sqr[10] = {'0','1','2','3','4','5','6','7','8','9'};
int player=1;
int x =0;

int main(){
	game();
	return 0;
}

void game(){
	char a;
	sqr[1]='1';
	sqr[2]='2';
	sqr[3]='3';
	sqr[4]='4';
	sqr[5]='5';
	sqr[6]='6';
	sqr[7]='7';
	sqr[8]='8';
	sqr[9]='9';
	printf("PLay or not ? (y/n)\n");
	scanf(" %c", &a);
	switch (a){
		case 'y':
			printf(" let's go!!!");
			board();
			choice();
			break;
		case 'n':
			printf("bye bye");
			break;
		default:
			printf("please input the correct answer\n");
			game();
	}
}

void board(){
	printf("\n\t\tTicTacToe\n");
	printf(" Player1 (X)\t - \tPlayer2 (O)\n");
	printf(" ___________ \n");
	printf("| %c | %c | %c |\n",sqr[1],sqr[2],sqr[3]);
	printf("|___|___|___|\n");
	printf("| %c | %c | %c |\n",sqr[4],sqr[5],sqr[6]);
	printf("|___|___|___|\n");
	printf("| %c | %c | %c |\n",sqr[7],sqr[8],sqr[9]);
	printf("|___|___|___|\n");
	system("color E");
	system("color 1E");
}

void choice(){
	int ch, x = 0;
	char turn;
	do{
		player = player%2!=0 ? 1 : 2;
		printf("\nPlayer %d turn: ", player);
		turn = player == 1 ? 'X': 'O';
		scanf(" %d", &ch);
		fflush(stdin);
		if (ch>0 && ch<10 && x==0){
			switch(sqr[ch]){
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					sqr[ch]=turn;
					x = winCheck();
					system("cls");
					player++;
					board();
					break;
				default:
					printf("%d is already assigned\n", ch);
					choice();
			}
		}
		else{
			if(x==0)
			choice();
		}	
	}while(x==0);
	
	if(x == 1){
		printf("\n%c is the winner \n",turn);
		game();
	}
	else if(x == 2){
		printf("Draw\n");
		game();
	}
}

int winCheck(){
	if(sqr[1]==sqr[2] && sqr[1] == sqr[3])
		return 1;
	else if(sqr[1]==sqr[4] && sqr[1] == sqr[7])
		return 1;
	else if(sqr[1] == sqr[5] && sqr[1]==sqr[9])
		return 1;
	else if(sqr[2] == sqr[5] && sqr[2] == sqr[8])
		return 1;
	else if(sqr[3] == sqr[6] && sqr[3] == sqr[9])
		return 1;
	else if(sqr[4] == sqr[5] && sqr[4] == sqr[6])
		return 1;
	else if(sqr[7] == sqr[8] && sqr[7] == sqr[9])
		return 1;
	else if(sqr[3] == sqr[5] && sqr[3] == sqr[7])
		return 1;
	else if(sqr[1]!='1' && sqr[2] != '2' && sqr[3] != '3' && sqr[4] != '4' && sqr[5] != '5' && sqr[6] != '6' && sqr[7] != '7' && sqr[8] != '8' && sqr[9]!='9')
		return 2;
	else
		return 0;
	
}
