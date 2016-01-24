/* Write a program that reads 3 numbers: an integer a (0 ≤ a ≤ 500), a floating-point b and a floating-point c and prints
them in 4 virtual columns on the console. Each column should have a width of 10 characters. The number a should
be printed in hexadecimal, left aligned; then the number a should be printed in binary form, padded with zeroes,
then the number b should be printed with 2 digits after the decimal point, right aligned; the number c should be
printed with 3 digits after the decimal point, left aligned. Examples:
*/

#include <stdio.h>
#include <stdlib.h>

#define FORMAT "|%-10x|%10s|%10.2f|%-10.3f|\n"

char *printBinary(int num) {
	int i, j, tmp;
	char *output = malloc(32);
	if(output) {
		j = 0;
		for (i = 9; i >= 0; i--, j++) {
			tmp = num >> i;
	    	if (tmp & 1) {
	 	    	output[j] = '1';
	 	    } else {
	      		output[j] = '0';
	  		}
 		}
 		return output;
 	} else {
 		return NULL;
 	}
}

int main(void) {
	unsigned int a;
	float b, c;
	printf("Type three numbers: ");
	scanf("%u %f %f", &a, &b, &c);
	if (a > 500) {return 1;}
	char *binary_a = printBinary(a);
	printf(FORMAT, a, binary_a, b, c);
	free(binary_a);
	return 0;
}


