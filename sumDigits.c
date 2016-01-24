/*  Write a program that enters a number n and after that enters more n numbers and calculates and prints their sum.
*/

#include <stdio.h>

int main(void) {
	int size, i;
	printf("How many numbers you want to sum? ");
	scanf("%d", &size);
	float sum, num;
	while(size > 0) {
		printf("number: ");
		scanf("%f", &num);
		sum += num;
		size -= 1;
	}
	printf("Sum is: %.1f\n", sum);
	return 0;
}
