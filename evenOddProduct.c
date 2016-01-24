/* 
 * Problem 10. Odd and Even Product
 * You are given n integers (given in a single line, separated by a space). Write a program that checks whether the
 * product of the odd elements is equal to the product of the even elements. Elements are counted from 1 to n, so the
 * first element is odd, the second is even, etc 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char str[50];
    
    printf("two or more numbers? ");
    fgets(str, 50, stdin);
    char *exploded = strtok(str, " ");
    char *reminder;
    int cnt = 1, even = 1, odd = 1;
    while (exploded != NULL) {       
        int num = strtol(exploded, &reminder, 10);
        if (cnt % 2 == 0) {
            even *= num;
        } else {
            odd *= num;
        }
        cnt++;
        exploded = strtok(NULL, " ");
    }
    if (odd == even) {
        printf("yes\n%d", odd);
    } else {
        printf("no\nodd_product = %d\neven_product = %d", odd, even);
    }
    
    return (EXIT_SUCCESS);
}

