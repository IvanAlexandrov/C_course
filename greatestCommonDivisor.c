/* 
 * Write a program that calculates the greatest common divisor (GCD)
 * of given two integers a and b. 
 * Use the Euclidean algorithm (find it in Internet)
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    printf("Enter two numbers: ");
    int a, b, tmp;
    scanf("%d %d", &a, &b);
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    printf("%d", a);
    return (EXIT_SUCCESS);
}

