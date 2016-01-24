/*
Problem 4. Print a Deck of 52 Cards
Write a program that generates and prints all possible cards from a standard deck of 52 cards (without the jokers).
The cards should be printed using the classical notation (like 5S (♠), AH (♥), 9C (♣) and KD (♦)). The card faces
should start from 2 to A. Print each card face in its four possible suits: clubs, diamonds, hearts and spades. Use 2
nested for-loops and a switch-case statement.
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int lines = 14;
    int cards = 4;

    int i, j;
    for (i = 2; i <= lines; i++) {
        char card[3] = "\0";

        switch(i) {
            case 10:
                card[0] = '1';
                card[1] = '0';
                break;
            case 11:
                card[0] ='J';
                break;
            case 12:
                card[0] = 'Q';
                break;
            case 13:
                card[0] = 'K';
                break;
            case 14:
                card[0] = 'A';
                break;
            default:
                card[0] = i + '0';

        }
        for (j = 1; j <= cards; j++) {
            switch(j) {
                case 1:
                    printf("%sC ", card);
                    break;
                case 2:
                    printf("%sD ", card);
                    break;
                case 3:
                    printf("%sH ", card);
                    break;
                case 4:
                    printf("%sS ", card);
                    break;
            }
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}