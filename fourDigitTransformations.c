/*Write a program that takes as input a four-digit number in format abcd (e.g. 2011) and performs the following:
Calculates the sum of the digits (in our example 2+0+1+1 = 4).
Prints on the console the number in reversed order: dcba (in our example 1102).
Puts the last digit in the first position: dabc (in our example 1201).
Exchanges the second and the third digits: acbd (in our example 2101).
The number has always exactly 4 digits and cannot start with 0.
*/



/* 
 * 48 is a magic number!
 * Just kidding. That is the easy way to convert char['0'...'9'] to integer
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * If in given string has alpha chars, or starts wit 0
 * function returns false
 */
int testNum(char *str) {
    int i;
    if (str[0] == '0') return 0;
    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) return 0;
    }
    return 1;
}

char *str_rev(char *str) {
    int length = strlen(str);
    char *result = malloc(length+1);
    if (!result) return NULL;
    int count = length - 1;
    int i = 0;
    while (count >= 0) {
        result[i] = str[count];
        count--;
        i++;
    }
    result[length] = '\0';
    return result;
}

int sumOfDigits(char *str) {
    int result = 0;
    int i;
    for (i = 0; i < strlen(str); i++) {
        result += str[i] - 48; //48 is the '0' ACII Code
    }
    return result;
}

char *shuffle(const char* order, char *str) {
    char *newStr = malloc(strlen(str)+1);
    if (!newStr) return NULL;
    int i;
    for (i = 0; i < strlen(order); i++) {
        newStr[i] = str[order[i] - 48]; //48 is the '0' ACII Code
    }
    return newStr;
}

int main(int argc, char** argv) {
    char num[5];
    printf("Enter a four digit number: ");
    fgets(num, 5, stdin);
    if (!testNum(num)) {
        printf("Incorrect number");
        return -1;
    }
    char *reversed = str_rev(num);
    char *shuffled_1 = shuffle("3012", num);
    char *shuffled_2 = shuffle("0213", num);
    int sum = sumOfDigits(num);
    printf("Sum of digits: %d\nReversed: %s\nOrder = 'dabc' : %s\nOrder = 'acbd' : %s",
            sum, reversed, shuffled_1, shuffled_2);
    free(reversed);
    free(shuffled_1);
    free(shuffled_2);
    return (EXIT_SUCCESS);
}
