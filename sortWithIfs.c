/*
 * Problem 7. Sort 3 Numbers with Nested Ifs
 * Write a program that enters 3 real numbers
 * and prints them sorted in descending order. Use nested if statements.
 * Don’t use arrays and the built-in sorting functionality
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("Enter three numbers: ");
    float a, b, c;
    int matches = scanf("%f %f %f", &a, &b, &c);
    if (matches != 3) {
        return -1;
    }
    if (a == b && b == c) {
        printf("%.1f %.1f %.1f\n", a, b, c);
    }
    if(b < a && c < a) { //a is max
        if (b > c) {
             printf("%.1f %.1f %.1f\n", a, b, c);
        } else {
            printf("%.1f %.1f %.1f\n", a, c, b);
        }
    } else if (a < b && c < b) { //b is max
        if (c > a ) {
            printf("%.1f %.1f %.1f\n", b, c, a);
        } else {
             printf("%.1f %.1f %.1f\n", b, a, c);
        }
    } else if (b < c && a < c) { // c is max
        if(b > a) {
            printf("%.1f %.1f %.1f\n", c, b, a);
        } else {
            printf("%.1f %.1f %.1f\n", c, a, b);
        }
    }
    printf("\n");
    return (EXIT_SUCCESS);
}