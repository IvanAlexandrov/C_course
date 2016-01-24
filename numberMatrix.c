/* 
 * Problem 9. Matrix of Numbers
 * Write a program that reads from the console a positive integer number n (1 ≤ n ≤ 20) and prints a matrix like in the
 * examples below. Use two nested loops.
 */

#include <stdio.h>
#include <stdlib.h>

void printMatrix(int n, int m){
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = i; j < m + i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
}
int main(int argc, char** argv) {
    unsigned char n;
    printf("Enter a number [2..20]: ");
    scanf("%d", &n);
    printMatrix(n, n);
    return (EXIT_SUCCESS);
}

