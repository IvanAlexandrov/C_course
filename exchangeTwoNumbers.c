/* 
 * Problem 1. Exchange If Greater
 * Write an if-statement that takes two integer variables a and b 
 * and exchanges their values if the first one is greaterthan the second one.
 * As a result print the values a and b, separated by a space.
 */

#include <stdio.h>
void exchangeTwoNumbers(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        exchangeTwoNumbers(&a, &b);
    }
    printf("%d %d\n", a, b);
    return 0;                                                                   
}
