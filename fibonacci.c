/* Fibonacci */

#include <stdio.h>

int fibonacci(int n) {
	if (n == 1 ) {
		return 0;
	} else if (n == 2) {
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}

}

int main(void) {
	int num, i;
	scanf("%d", &num);
	if (num > 100) {
		return -1;
	}
	for (i=1; i<=num; i++) {
		printf("%d ", fibonacci(i));
	}
}
