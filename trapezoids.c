/* Problem 13. Trapezoids
 * Write an expression that calculates trapezoid's area 
 * by given sides a and b and height h. Examples:
 * Print true or false
 */

#include <stdio.h>
#include <stdlib.h>

float calcArea(float a, float b, float h) {
    printf("|%10.3f|%10.3f|%10.3f|", a, b, h);
    return ((a+b) / 2) * h;  
}

int main(int argc, char** argv) {
    printf("|%10s|%10s|%10s|%10s|\n", "a", "b", "h", "Area");
    printf("%10.2f|\n", calcArea(5, 7, 12));
    printf("%10.2f|\n", calcArea(2, 1, 33));
    printf("%10.2f|\n", calcArea(8.5, 4.3, 2.7));
    printf("%10.2f|\n", calcArea(100, 200, 300));
    printf("%10.2f|\n", calcArea(0.222, 0.333, 0.555));
    return (EXIT_SUCCESS);
}

