#include <stdio.h>
main() {
	int i,j,k,input;
	scanf("%d",&input);
	for (i=input;i>=1;i--){
		for (j=input-i;j>=1;j--) {
			printf(" ");
		}
		for (k=input;k>=(input+1)-i;k--){
			printf(" *");
		}
		printf("\n");
	}
}
