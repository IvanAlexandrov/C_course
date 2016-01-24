/* 
 * Problem 11. Random Numbers in Given Range
 * Write a program that enters 3 integers n, min and max (min ≤ max)
 * and prints n random numbers in the range [min...max]
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandom(int min, int max) {
    clock_t start = clock();
    srand(start);
    return rand() % max + min;
}
int main(int argc, char** argv) {
    int n, i, min, max;
    printf("How many randoms?");
    scanf("%d", &n);
    printf("min = ");
    scanf("%d", &min);
    printf("max = ");
    scanf("%d", &max);
    for( i = 0; i < n; i++) {
        printf("%d ", getRandom(min, max));
    }
    return (EXIT_SUCCESS);
}

