/* Sum of 3 Numbers */

#define TABLE_HEADER "|%4s|%4s|%4s|%4s|\n"
#define TABLE_ROW "|%4.2f|%4.2f|%4.2f|%4.2f|\n"

#include <stdio.h>

int main (int argc, char **argv) {
	float a, b, c, sum;
	scanf("%f %f %f", &a, &b, &c);
	sum = a+b+c;
	printf(TABLE_HEADER, "a", "b", "c", "sum");
	printf(TABLE_ROW, a, b, c, sum);
	return 0;
}