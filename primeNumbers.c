/* Write an expression that checks if given 
 * positive integer number n (n ≤ 100) is prime 
 * (i.e. it is divisible without remainder only to itself and 1). 
 * Print true or false
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num) {
    if (num > 100) {
	printf("Too large number");
    }
    printf("Is Prime %d? ", num);
    if (num <= 1) return 0;
    int divisor = (int)sqrt(num) + 1;
    int i;
    for(i = 2; i < divisor; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char** argv) {
    printf("%s\n", isPrime(1) ? "true" : "false");
    printf("%s\n", isPrime(2) ? "true" : "false");
    printf("%s\n", isPrime(3) ? "true" : "false");
    printf("%s\n", isPrime(4) ? "true" : "false");
    printf("%s\n", isPrime(9) ? "true" : "false");
    printf("%s\n", isPrime(97) ? "true" : "false");
    printf("%s\n", isPrime(51) ? "true" : "false");
    printf("%s\n", isPrime(-3) ? "true" : "false");
    printf("%s\n", isPrime(0) ? "true" : "false");
    return (EXIT_SUCCESS);
}