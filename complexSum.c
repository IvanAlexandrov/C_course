/*
 * Problem 5. Calculate 1 + 1!/X + 2!/X 2 + ... + N!/X N
 * Write a program that, for a given two integer numbers n and x,
 * calculates the sum S = 1 + 1!/x + 2!/x 2 + ... + n!/x n .
 * Use only one loop. Print the result with 5 digits after the decimal point.
 */

#include <stdio.h>
#include <stdlib.h>

double factorial(int n);
double power_num(int n, int p);
void sum(int n, int x);

int main(int argc, char** argv) {
    printf("Enter two positive integers: ");
    int n, x;
    scanf("%d %d", &n, &x);
    sum(n, x);
    return (EXIT_SUCCESS);
}

double factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double power_num(int n, int p) {
    double power = 1;
    int i;
    for (i = 1; i <= p; i++) {
        power *= n;
    }
    return power;
}

void sum(int n, int x) {
    int i;
    double sum = 1;
    for (i = 1; i <= n; i++) {
        sum += factorial(i) / power_num(x, i);
    }
    printf("%.5f", sum);
}