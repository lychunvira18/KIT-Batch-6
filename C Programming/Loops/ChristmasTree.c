#include <stdio.h>

main()
{
	int star,i,j,k;
	
	printf("Enter the number of stars:");
	scanf("%d",&star);
	for(i=1;i<=star;i++)
	{
		for(j=-6;j<=star-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=star;i++)
	{
		for(j=0;j<=star-(i-3);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		for(j=1;j<=i+5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=star;i++)
	{
		for(j=0;j<=star-(i-1);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		for(j=0;j<=i+8;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=3;i<=star+1;i++)
	{
		for(k=-3;k<=star+1;k++)
		printf(" ");
		for(j=4;j<=star;j++)
		printf("*");
		printf("\n");
	}
}
