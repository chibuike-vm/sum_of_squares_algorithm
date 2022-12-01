#include <stdio.h>

int main(void) {
	int i, sum = 0, squares;
	printf("Please enter a natural number: ");
	scanf("%d", &i);

	printf("\nThe squares of the natural number; %d are as follows:", i);
	for (int j = 1 ; j <= i; j++) {
		squares = (j * j);
		sum = sum + squares; // === sum += squares
		printf("%3d", squares);
	}
	printf("\nThe sum of squares of the natural number; %d is = %d\nC language makes computation easy!", i, sum);
	putchar('\n');
	return 0;
}

