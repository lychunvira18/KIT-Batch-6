#include<stdio.h>
void usdToKhR(int dollar);
void usdToThB(int dollar);
void usdToEuro(int dollar);
void usdToVnD(int dollar);
void usdToSGD(int dollar);
int main()
{
	int dollar;
	printf("Enter amount of money: $");
	scanf("%d",&dollar);
	usdToKhR(dollar);
	usdToThB(dollar);
	usdToEuro(dollar);
	usdToVnD(dollar);
	usdToSGD(dollar);
	return 0;
}

void usdToKhR(int dollar)
{
	int khr = dollar * 4100;
	printf("\nDollar: $%d- KH Riel: %dR",dollar,khr);
	return;
}
void usdToThB(int dollar)
{
	float Thb = dollar * 31.71 ;	//1$=31.71B
	printf("\nDollar: $%d- TH Baht: %.2fB",dollar,Thb);
	return;
}
void usdToEuro(int dollar)
{
	float euro = dollar / 1.12;		//$1=1.12euro
	printf("\nDollar: $%d- Euro: %.2feuro",dollar,euro);
	return;
}
void usdToVnD(int dollar)
{
	float dong = dollar * 23199.50;		//$1=23199.50dong
	printf("\nDollar: $%d- Vn Dong: %.2fDong",dollar,dong);
	return;
}
void usdToSGD(int dollar)
{
	float sgd = dollar * 1.35901;	//$1=1.35901SGD
	printf("\nDollar: $%d- SG Dollar: %.2fSGD",dollar,sgd);
	return;
}
