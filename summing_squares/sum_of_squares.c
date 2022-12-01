#include <stdio.h>

int main(void) {
	int i, j = 1, sum = 0, squares;

	printf("Please, enter any natural number: ");
	scanf("%d", &i);

	if (i >= 1) {
		printf("\nThe squares for the natural number; %d are as follows:", i);

		do {
			squares = (j * j);
			sum = sum + (j * j);
			j++;
			printf("%8d", squares);
		} while (j <= i);

		putchar('\n');
		printf("The sum of squares for the natural number; %d is = %d\n", i, sum);

	} else {
		printf("Please, kindly enter a natural number or positive integer\n");
	}

	return 0;
}

