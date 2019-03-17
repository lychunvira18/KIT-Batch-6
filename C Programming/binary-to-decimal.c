#include<stdio.h>
#include<math.h>

int main(){
  int bin, dec=0, temp, i=0;
  printf("Enter the binary number : ");
  scanf("%d",&bin);

  do{
    temp=bin%10;
    bin/=10;
    temp*=pow(2,i);
    dec+=temp;
    i++;
  }while(bin>0);

  printf("The decimal number is   : %d",dec);
  return 0;
}
