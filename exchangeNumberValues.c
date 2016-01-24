/* Exchange Variable Values */

#include <stdio.h>

int main(int argc, char *argv[]) {
	char a = 5;
	char b = 10;
	printf("Before:\na = %d\nb = %d\n", a, b);
	a = a + b;
	b = a - b;
 	a = a - b;
	printf("After:\na = %d\nb = %d\n", a, b);
	return 0;
}
