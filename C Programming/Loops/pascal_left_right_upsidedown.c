#include <stdio.h>
main() {
	int i,j,input;
	scanf("%d",&input);
	for (i=1;i<=input;i++){
		for (j=input-i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
