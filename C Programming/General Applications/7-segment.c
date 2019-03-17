#include <stdio.h>
void decoder(int input);
void draw(int val);
void takeinput();
int main(){
	takeinput();
	return 0;
}
void takeinput(){
	int number;
	printf("-------------------------------------------------------------------------------\nPlease enter the number:");
	scanf("%d",&number);
	decoder(number);
}
void decoder(int input) {
	int hexa[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77};
	switch (input){
		case 0:
			draw (hexa[0]);
			break;
		case 1:
			draw (hexa[1]);
			break;
		case 2:
			draw (hexa[2]);
			break;
		case 3:
			draw (hexa[3]);
			break;
		case 4:
			draw (hexa[4]);
			break;
		case 5:
			draw (hexa[5]);
			break;
		case 6:
			draw (hexa[6]);
			break;
		case 7:
			draw (hexa[7]);
			break;
		case 8:
			draw (hexa[8]);
			break;
		case 9:
			draw (hexa[9]);
			break;
		case 10:
			draw (hexa[10]);
			break;
		default:
			printf("Please Give A Proper Input!!!\n");
			takeinput();
			
	}
}
void draw(int val) {
	int i=0,j=0;
	char matrix[7][6];
	for (i=0;i<6;i++) {
		for (j=0;j<5;j++) {
			matrix[i][j]=' ';
		}	
	}
	if(val&1){
		matrix[0][1]='*';
		matrix[0][2]='*';
		matrix[0][3]='*';
		matrix[0][4]='*';
	}
	if((val>>1)&1) {
		matrix[1][5]='*';
		matrix[2][5]='*';
	}
	if((val>>2)&1){
		matrix[4][5]='*';
		matrix[5][5]='*';
	}
	if((val>>3)&1) {
		matrix[6][1]='*';
		matrix[6][2]='*';
		matrix[6][3]='*';
	}
	if((val>>4)&1){
		matrix[4][0]='*';
		matrix[5][0]='*';
	}
	if((val>>5)&1){
		matrix[1][0]='*';
		matrix[2][0]='*';
	}
	if((val>>6)&1){
		matrix[3][1]='*';
		matrix[3][2]='*';
		matrix[3][3]='*';
		matrix[3][4]='*';
	}
	printf("\n");
	for (i=0;i<7;i++) {
		printf("\t");
		for (j=0;j<6;j++) {
			printf("%c",matrix[i][j]);
		}	
		printf("\n");
	}
}

// ****
//*    *
//*    *
// ****
//*    *
//*    *
// ****
