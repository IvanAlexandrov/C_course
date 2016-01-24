/* Comparing Floats */

#include <stdio.h>
int float_compare(double a, double b);

int main(int argc, char *argv[]) {
	double a, b;
	double numbers[6][2] = {
		{5.3, 6.01},
		{5.00000001, 5.00000003},
		{5.00000005, 5.00000001},
		{-0.0000007, 0.00000007},
		{-4.999999, -4.999998},
		{4.999999, 4.999998}	
	};
	int i;
	for (i = 0; i < 6; i++) {
		a = numbers[i][0];
		b = numbers[i][1];
		printf(
			"Number a = %f\tNumber b = %f\tEquals = %s\n",
			 a, b, float_compare(a, b) ? "true" : "false");
	}
	return 0;
}

int float_compare(double a, double b) {
	double eps = 0.000001;
	if ((a - eps < b) && (a + eps > b)) {
		return 1;
	} else {
		return 0;
	}

}
