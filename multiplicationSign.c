/*
 * Problem 4.Multiplication Sign
 * Write a program that shows the sign (+, - or 0)
 * of the product of three real numbers, without calculating it.
 * Use a sequence of if operators
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a, b, c;
    printf("Enter thee numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    float product = a * b * c;
    if (product > 0) {
        printf("+\n");
    } else if (product < 0) {
        printf("-\n");
    } else {
        printf("0\n");
    }
    return (EXIT_SUCCESS);
}
