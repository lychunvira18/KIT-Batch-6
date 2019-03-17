#include<stdio.h>
main(){
	float oral,grammar,network,web,it,c,math,sum,average;
	printf("Enter all of your subjects score\nOral & Speech: ");
	scanf("%f",&oral);
	printf("English Grammar & Intensive Vocabulary: ");
	scanf("%f",&grammar);
	printf("Computer Network: ");
	scanf("%f",&network);
	printf("HTML/CSS/JS: ");
	scanf("%f",&web);
	printf("IT Literacy: ");
	scanf("%f",&it);
	printf("C Programming: ");
	scanf("%f",&c);
	printf("Basic Mathematic: ");
	scanf("%f",&math);
	sum = oral + grammar + network + web + it + c + math;
	average = sum/7; 
	printf("\nThe total score is: %.2f\n",sum);
	printf("The average score is: %.2f",average);
}
