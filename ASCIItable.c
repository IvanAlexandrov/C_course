/* Print the ASCII Table */

#include <stdio.h>

int main(int argc, char *argv[]) {
	short i;
	for(i = 0; i <= 255; i++) {
		if (i >= 32 && i < 128) {
			printf("ASCII code %d - %c\n", i, i);
		}
	}
	return 0;
}
