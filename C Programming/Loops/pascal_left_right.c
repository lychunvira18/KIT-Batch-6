//pascal_left_right.c
#include <stdio.h>
main() {
	int i,j,k,l;
	printf("Enter how many star do you want to see in the output : ");
	scanf("%d",&l);
	for (i=1;i<=l;i++){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
