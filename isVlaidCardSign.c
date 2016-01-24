/*
 * Problem 3. Check for a Play Card
 * Classical play cards use the following signs to designate the card face: 
 * 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K and A. 
 * Write a program that enters a string and prints
 * “yes” if it is a valid card sign or “no” otherwise.
 */

#include <stdio.h>

int main(int argc, char** argv) {
    char card[3];
    int digit;
    printf("Enter a card: ");
    scanf("%c%c", &card[0], &card[1]);
    if (card[0] == '1' && card[1] == '0') {
        printf("Yes\n");
    } else {
        switch(card[0]) {
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case 'A':
            case 'K':
            case 'Q':
            case 'J':
                
                printf("Yes\n");
                break;
            default:
               printf("No\n");
        }
    }
    
    return 0;
}

