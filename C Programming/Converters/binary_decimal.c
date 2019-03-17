//This is a programme of covertion between binary and decimal number

#include <stdio.h>
#include <math.h>

main()
{
	int binary,digit,decimal=0,i=0;
	
	printf("Please enter the binary number:");
	scanf("%d",&binary);
	for(;a>0;)
	{
		digit=binary%10;
		binary=binary/10;
		decimal=digit*pow(2,i)+c;
		i++;
	}
	printf("The decimal is:%d",decimal);
}
