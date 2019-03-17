#include<stdio.h>
main()
{
  float apple, banana, mango, sum, tax;
  printf("Apple $1 each\n");
  printf("Banana $2 each\n");
  printf("Mango $3 each\n");
  printf("How many Apple would you like to buy?\n");
  printf("Enter amount of Apple : ");
  scanf("%f",&apple);
  printf("Enter amount of Banana : ");
  scanf("%f",&banana);
  printf("Enter amount of Mango : ");
  scanf("%f",&mango);
  sum= (1*apple)+(2*banana)+(3*mango);
  tax=sum*0.1;
  printf("Total =%.2f $\n",sum);
  printf("Include tax 10%: %.2f $\n",tax);
  sum+=tax;
  printf("Total =%.2f $\n",sum);
}
