#include<stdio.h>
#include<string.h>
int main()
{
	char binary[1000];  //declare string
	int i,j=0;
	printf("Input binary number : ");
	gets(binary);
	for(i=0;binary[i]!='\0';i++)
	{
		if(binary[i]!='0'||binary[i]!='1')   // check the input is binary number or not
		{
			j++;
		}
		else if(binary[i]=='0')   // do the 1's complement
			binary[i]='1';
		else if(binary[i]=='1')
		binary[i]='0';
	}
	if(j>0)
	{
		printf("error input");  // if it's not binary it will shiw the error
	}
	else // print the result
	{
	printf("1'S Complement: ");
	puts(binary);
	}
}
