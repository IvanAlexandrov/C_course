/* 
 * Problem 7. Calculate N! / (K! * (N-K)!)
 * In combinatorics, the number of ways to choose k different members out of a group of n different elements (also
 * known as the number of combinations) is calculated by the following formula:
 * For example, there are 2598960 ways to withdraw 5 cards out of a standard deck of 52 cards. Your task is to write a
 * program that calculates n! / (k! * (n-k)!) for given n and k (1 < k < n < 100).
 */

#include <stdio.h>
#include <stdlib.h>

unsigned long numberOfCombinations(const int n, const int denominator) {
    int cnt = 0;
    unsigned long new_n = 1, new_denominator = 1;
    while (denominator > cnt) {
        new_n *= n - cnt;
        new_denominator *= denominator - cnt;
        cnt ++;
    }
   return new_n/new_denominator;
}

int main(int argc, char** argv) {
    unsigned n, k;
    printf("Enter two ints (1 < k < n < 100): ");
    scanf("%u %u", &n, &k);
    if (k >= n || n >= 100) {
        return -1;
    }
    unsigned long result = numberOfCombinations(n, k);
    printf("%lu", result);
    
    return (EXIT_SUCCESS);
}