/* 
 * Write an expression that checks for given point (x, y) 
 * if it is within the circle K({1, 1}, 1.5) and out of the rectangle
 * R(top=1, left=-1, width=6, height=2). Print yes or no:
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RADIUS 1.5

int isInsideCircle(double x, double y) {

    double d = pow((x - 1), 2) + pow((y - 1), 2); // distance from the center of the circle
    if (d <= pow(RADIUS, 2)) {
        return 1;
    } else {
        return 0;
    }
}

int isOutsideRectangle(double x, double y) {
    if (y < -1 || y >1) {
        return 1;
    } else if (x < -1 || x > 5) {
        return 1;
    } else {
	return 0;
    }
}

char *decide(double x, double y) {
    printf("%4s%7.2lf| %4s%7.2lf| ", "x =", x, "y =", y);
    if (isOutsideRectangle(x, y) && isInsideCircle(x, y)) {
        return "Yes";
    } else {
        return "NO";
    }
}

int main(void) {
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(1, 2));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(2.5, 2));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(0, 1));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(2.5, 1));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(2, 0));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(4, 0));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(2.5, 1.5));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(2, 1.5));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(1, 2.5));
    printf("Point inside Circle & Outside Rectangle?: %10s|\n", decide(-100, -100));
    return 0;
}


