/* Write a program that finds the average of the sum of 3 numbers. */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 3

int main(int argc, char** argv) {
    float array[ARRAY_SIZE];
    float sum = 0;
    int i;
    for (i = 0; i < ARRAY_SIZE; i ++){
        scanf("%f", &array[i]);
        sum += array[i];
    }
    float avg = sum / ARRAY_SIZE;
    printf("Average is %.5f\n", avg);
    return (EXIT_SUCCESS);
}
