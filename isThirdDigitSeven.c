/*
 * Problem 8. Third Digit is 7?
 * Write an expression that checks for given integer if its third digit 
 * from right-to-left is 7. Print true or false:
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isThirdSeven(char *str) {
    int length = strlen(str);
    int count = 0;
    printf("Is the third digit from right to left 'Seven'?: ");
    while (length >= 0) {
        length--;
        if (count == 3 && str[length] == '7') {
            return 1;
        }
        count++;
    }
    return 0;
}

int main(int argc, char** argv) {
    char num[12];
    printf("Enter a number: ");
    fgets(num, 12, stdin);
    printf("%s\n", isThirdSeven(num) ? "true" : "false");
    return (EXIT_SUCCESS);
}


