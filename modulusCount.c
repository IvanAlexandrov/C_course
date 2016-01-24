/*
Problem 9. ** Numbers in Interval Dividable by Given Number
Write a program that reads two positive integer numbers and prints how many numbers p exist between them such
that the reminder of the division by 5 is 0
*/

#include <stdio.h>

int main(void) {
	int p, start, end;
	printf("Start number: ");
	scanf("%u", &start);
	printf("End Number: ");
	scanf("%u", &end);
	if (end < start) {
		printf("Invalid range");
		return 1;
	} 
	p = 0;
	printf("In range %d - %d was found ", start, end);
	while (end >= start) {
		if (end % 5 == 0) {
			p += 1;
		}
		end--;	
	}
	printf("%d numbers which divided by 5 has remainder 0.\n", p);
	return 0;
}
