/*
 * Problem 6. The Biggest of Five Numbers
 * Write a program that finds the biggest of five numbers by using only five if statements
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float numbers[5];   
    printf("Enter five numbers: ");
    int matches = scanf("%f %f %f %f %f",
            &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
    if (matches < 5) {
        printf("You must enter five numbers!\n");
    }
    int i;
    float max = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("%.1f\n", max);
    return (EXIT_SUCCESS);
}