#include<stdio.h>
void print(int num);
main()
{
	int input;
	scanf("%d", &input);
	print(input);
}
void print(num)
{
	int i, j,k=65,l=1;
	char ch=k;
	for (i=0;i<num;i++)
	{
		for(j=0;j<num-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<l+i;j++)
		{
			if(i==0)
			{
				printf("%c", ch);
				break;
			}
			else
			{
				if(j==0)
				{
					printf("%c", ch);
					
				}
				else if(j<=i)
				{
					k++;
					ch = k;
					printf("%c", ch);
					
				}
				else if(j>i)
				{
					k--;
					ch = k;
					printf("%c", ch);
					
				}
				
			}
			
		}
		puts("");
		l++;
		;
	}
}
