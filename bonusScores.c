/* 
 * Write a program that applies bonus score to given score in the range [1...9]
 * by the following rules:
 * If the score is between 1 and 3, the program multiplies it by 10.
 * If the score is between 4 and 6, the program multiplies it by 100.
 * If the score is between 7 and 9, the program multiplies it by 1000.
 * If the score is 0 or more than 9, the program prints “invalid score”.
 */

#include <stdio.h>

int main(void) {
    int scores;
    printf("What's the scores?: ");
    scanf("%d", &scores);
    printf("|%8s|%15s|\n", "Scores", "Bonus");
    if (scores <= 0 || scores > 9) {
        printf("|%8d|%15s|\n", scores, "Invalid score");
    } else if (scores >= 1 && scores <= 3) {
        printf("|%8d|%15d|\n", scores, scores * 10);
    } else if (scores >= 4 && scores <= 6) {
        printf("|%8d|%15d|\n", scores, scores * 100);
    } else {
        printf("|%8d|%15d|\n", scores, scores * 1000);
    }
    return 0;                                                                   
}


