/* 
 * File:   main.c
 * Author: vankel
 *
 * Created on October 26, 2015, 3:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

int printArray(int *array, int size);

int main(int argc, char** argv) {
    unsigned int elements;
    printf("Enter the number of elements: ");
    if (scanf("%du", &elements) == 1) {
        if (elements < 1) {
            printf("Invalid number");
            return -1;
        }
        int i;
        int array[elements];
        for (i = 0; i < elements; i++) {
            scanf("%d ", &array[i]);
        }
        printArray(array, elements);
    }
    return (EXIT_SUCCESS);
}

int printArray(int *array, int size) {
    int i;
    for(i = 0; i< size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return i;
}
