//convert from decimal to octal decimal and from octal decimal to binary
#include<stdio.h>


int dec = 0,oct = 0, temp = 0, i;
int DeToOc();
int OcToDe();
void main()
{
	int choice;
	restart: printf("This is the program to convert decimal and octal decimal\n");
	oct = DeToOc();
	printf("The result is %d",  oct);
		
} 
int DeToOc()
{
	i =1;
	printf("Enter the Decimal number you want to convert: ");
	scanf("%d", &dec);
	while(dec != 0)
	{
		temp = temp + dec%8 * i;
		dec /= 8;
		i*=10;
	}
	return temp;	
 } 






