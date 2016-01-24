#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "array_utils.h"

int arr_min(int*, int);
int arr_max(int*, int);
int arr_clear(int*, int);
double arr_average(int*, int);
int arr_sum(int*, int);
int arr_contains(int*, int, int);
int *arr_merge(int*, int, int*, int);

int main(int argc, char** argv) {
    int arr1[3] = {1, 3, 5};
    int arr2[4] = {2, 4, 6, 8};
    int *ptr = arr_merge(arr1, 3, arr2, 4);
    if (ptr) {
        int i;
        for (i = 0; i < 7; i ++) {
            printf("%d", ptr[i]);
        }
        free(ptr);
    }
    return (EXIT_SUCCESS);
}

int arr_min(int *array, int size) {
    if (size <= 0) {
         return INT_MIN;
    }
    int min = array[0];
    int i;
    for (i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int arr_max(int *array, int size) {
    if (size <= 0) {
         return INT_MIN;
    }
    int max = array[size - 1];
    int i;
    for (i = size - 1; i >= 0; i--) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int arr_clear(int *array, int size) {
    if (size <= 0) {
        return 1;
    }
    int i;
    for (i = 0; i < size; i++) {
        array[i] = 0;
    }
    return 0;
}

double arr_average(int *array, int size) {
    return arr_sum(array, size) / size;
}

int arr_sum(int *array, int size) {
    if (size <= 0) {
        return INT_MIN;
    }
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int arr_contains(int *haystack, int size, int needle) {
    if (size <= 0) {
        return -1;
    }
    int i;
    for (i = 0; i < size; i++) {
        if (haystack[i] == needle) {
            return 1;
        }
    }
    return 0;
}

int *arr_merge(int *array1, int size1, int *array2, int size2) {
    int newSize = size1 + size2;
    int *result = malloc(newSize * sizeof(int));
    int i, cnt = 0;
    for (i = 0; i < size1; i++, cnt++) {
        result[cnt] = array1[i];
    }
    for (i = 0; i < size2; i++, cnt++) {
        result[cnt] = array2[i];
    }
    return result;
}