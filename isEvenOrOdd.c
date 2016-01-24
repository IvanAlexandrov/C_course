/* Odd or Even Integers */

#include <stdio.h>

int isOdd(int num) 
{
	if (num % 2 != 0) return 1;
	return 0;
}

int main(void) 
{
	int n;
	scanf("%d", &n);
	printf("Odd? %d\n", isOdd(n));
	return 0;
}