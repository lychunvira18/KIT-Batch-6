#include <stdio.h>
main() {
	int i,j,k,input;
	scanf("%d",&input);
	for (i=1;i<=input;i++){
		for (k=1;k<i;k++) {
			printf(" ");
		}
		for (j=(input+1)-i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
