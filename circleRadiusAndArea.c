/* Circle Perimeter and Area */
#define PI 3.14
#include <stdio.h>

double circlePerimeter(double radius) {
	return 2 * PI * radius;
}

double circleArea(double radius) {
	return PI * radius * radius;
}

int main(int argc, char *argv[]) {
	double r;
	printf("What is the radius of circle: ");
	scanf("%lf", &r);
	printf("|%-10s|%10s|%10s|\n","r", "perimeter", "area");
	printf("|%-10.2lf|%10.2lf|%10.2lf|\n", r, circlePerimeter(r), circleArea(r));
	
	return 0;
}
