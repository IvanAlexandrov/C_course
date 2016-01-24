/* 
 * Problem 8. Catalan Numbers
 * In combinatorics, the Catalan numbers are calculated by the following formula:
 * Write a program to calculate the n th Catalan number by given n (1 < n < 100).
 */

#include <stdio.h>
#include <stdlib.h>

unsigned long nthCatalan(const int n) {
    if (n <= 1) {
        return 1;
    }
    unsigned long nominator = 1;
    unsigned long denominator = 1;
    int i;
    for (i = 2; i <= n; i++) {
        nominator *= n + i;
        denominator *= i;
    }
    return nominator / denominator;
}

int main(int argc, char** argv) {
    unsigned n, k;
    printf("Enter n (1 < n < 100): ");
    scanf("%u", &n);
    if (n >= 100) {
        return -1;
    }
    unsigned long result = nthCatalan(n);
    printf("%lu", result);
    return (EXIT_SUCCESS);
}

