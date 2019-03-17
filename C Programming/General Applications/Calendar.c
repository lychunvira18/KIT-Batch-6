#include <stdio.h>

main()
{
	int month,year,i;
	
	printf("---------->WELCOME TO HELL OF KIT CALENDAR<----------\n\n\n");
	printf("Please enter month and year:\n");
	scanf("%d %d",&month,&year);
	
	if(year% 4 == 0 && year%100 != 0 || year%400 == 0)
	{
		if(month == 2)
		{
			printf("\n\nThe days in this month and year is:\n");
			for(i=1;i<=29;i++)
			printf("%d\n",i);
		}
	}
	else
	{
		if(month%3 == 0 && month <= 8)
		{
			printf("\n\nThe days in this month and year is:\n");
			for(i=1;i<=31;i++)
			printf("%d\n",i);
		}
		else if(month%2 == 0 && month >= 8)
		{
			printf("\n\nThe days in this month and year is:\n");
			for(i=1;i<=31;i++)
			printf("%d\n",i);
		}
		else
		{
			printf("\n\nThe days in this month and year is:\n");
			for(i=1;i<=30;i++)
			printf("%d\n",i);
		}
	}
}
