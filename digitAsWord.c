/*
 * Problem 8. Digit as Word
 * Write a program that asks for a digit (0-9), and depending on the input, 
 * shows the digit as a word (in English). Print“not a digit” 
 * in case of invalid input. Use a switch statement
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float digit;
    int intDigit;
    printf("Enter a digit: ");
    scanf("%f", &digit);
    if (digit < 0) {
        printf("not a digit");
        return -1;
    } else {
        intDigit = (int)digit;
    }
    
    switch(intDigit) {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default:
           printf("not a digit");
    }
    return (EXIT_SUCCESS);
}

