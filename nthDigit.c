/* 
 * Problem 10. N-th Digit
 * Write a program that prints the n-th digit of a number (from right to left).
 * If no such digit exists, print a dash "-".
 * Hint: You need to learn how to use a while-loop.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int testNum(char *str, char *pos) {
    int length = strlen(str);
    int index = atoi(pos) + 1;
    if (index > length) {
        printf("-");
    } else {
        printf("%c", str[length - index]);
    }
}

int main(int argc, char** argv) {
    char number[10];
    char position[10];
    printf("Enter a number: ");
    fgets(number, 10, stdin);
    printf("Which position in number you want to display?: ");
    fgets(position, 10, stdin);
    testNum(number, position);
    return (EXIT_SUCCESS);
}
