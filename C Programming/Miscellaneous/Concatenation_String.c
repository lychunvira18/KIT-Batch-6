#include<stdio.h>
#define SIZE 50
int main(){
  int i=0,j=0;
  char str1[SIZE],str2[SIZE],str3[SIZE];
  char *st1=str1,*st2=str2;
  puts("Enter first string");
  gets(str1);
  puts("Enter second string");
  gets(str2);
  printf("Before concatenation the strings are\n");
  puts(str1);
  puts(str2);
  while(*st1!='\0'){
      str3[i++]=*st1++;
  }
  while(*st2!='\0'){
      str3[i++]=*st2++;
  }
  str3[i]='\0';
  printf("After concatenation the strings are\n");
  puts(str3);
  return 0;
}

