#include <stdio.h>

main()
{
	int decimal,hexa,mod,pro,i,ori;
	char inDecHex[30];
	
	printf("Enter the decimal number:");
	scanf("%d",&decimal);
	ori=decimal;
	while(decimal != 0)
	{
		mod = decimal%16;
		//res1 = res1*10+mod;
		if(mod>10)
		{
			pro = mod + 55;
		}
		else
		{
			pro = mod + 48;
		}
		decimal = decimal/16;
		inDecHex[i=i+1]= pro;
	}
	printf("\n\nThe HEXA-DECIMAL of %d is : ",ori); 
	for(i=i;i>0;i--)
	printf("%c",inDecHex[i]);
}
