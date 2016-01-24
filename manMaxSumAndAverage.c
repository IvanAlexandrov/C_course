/*
 * Problem 3. Min, Max, Sum and Average of N Numbers
 * Write a program that reads from the console a sequence of n integer numbers
 * and returns the minimal, the maximal number, the sum and the average
 * of all numbers (displayed with 2 digits after the decimal point).
 * The input starts by the number n (alone in a line) followed by n lines,
 * each holding an integer number
 */

#include <stdio.h>
#include <stdlib.h>

double min(int *array, int size) {
    int i, min=array[0];
    for (i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double max(int *array, int size) {
    int i, max = array[0];
    for (i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

double sum(int *array, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

double average(int *array, int size) {
    return sum(array, size) / size;
}

int main(void) {
    printf("Please enter a number: ");
    int i, n;
    scanf("%du", &n);
    int array[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf(" min = %.2f\n max = %.2f\n sum = %.2f\n average = %.2f\n",
        min(array, n), max(array, n), sum(array, n), average(array, n));
    return (EXIT_SUCCESS);
}