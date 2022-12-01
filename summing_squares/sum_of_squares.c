#include <stdio.h>

int main(void) {
	int i, j = 1, squares, sum = 0;
	printf("Please, enter a natural number: ");
	scanf("%d", &i);
	
	if (i >= 1) {
    		printf("\nThe squares of the natural number; %d are as follows:", i);
		while (j <= i) {
			squares = (j * j);
			sum = sum + (j * j);
			printf("%4d", squares);
			j++;
		}	
		printf("\nThe sum of squares for the natural number; %d is = %d\n", i, sum);
	} else {
		puts("Please, kindly enter a positive integer or natural number");
	}
	return 0;
}

