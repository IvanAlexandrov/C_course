/* 
 * Problem 13. Binary to Decimal Number
 * Problem 14. Decimal to Binary Number
 * Problem 15. Hexadecimal to Decimal Number
 * Problem 16. Decimal to Hexadecimal Number
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

long binToDec(char *str); // Problem 13
char *decToBin(long num); // Problem 14
long hexToDec(char *str); // Problem 15
char *decToHex(long num); // Problem 16
char *str_rev(char *str);

int main(int argc, char** argv) {
    printf("Please select option:\n");
    printf("1 -> Binary to Decimal conversion\n");
    printf("2 -> Decimal to Binary conversion\n");
    printf("3 -> Hex to Decimal conversion\n");
    printf("4 -> Decimal to Hex conversion\n");
    int selection;
    long num;
    char str[256];
    scanf("%d", &selection);
    switch (selection) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%255s", str);
            printf("%ld", binToDec(str));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%ld", &num);
            char *binStr = decToBin(num);
            printf("%s\n", binStr);
            if (binStr != "0")
                free(binStr);
            break;
        case 3:
            printf("Enter a hex number: ");
            scanf("%255s", str);
            printf("%ld", hexToDec(str));
            break;
        case 4:
            printf("Enter a decimal number: ");
            scanf("%ld", &num);
            char *hexStr = decToHex(num);
            printf("%s\n", hexStr);
            if (hexStr != "0")
                free(hexStr);
            break;
        default:
            printf("Invalid option!\n");
    }
    return (EXIT_SUCCESS);
}

long binToDec(char *str) {
    int i = 0;
    long result;
    while (str[i] != 0) {
        if (str[i] == '0') {
            result <<= 1;
        } else if (str[i] == '1') {
            result <<= 1;
            result += 1;
        }
        i++;
    }
    return result;
}

char *decToBin(long num) {
    if (num == 0) return "0";
    char *binaryStr = malloc(32);
    if (!binaryStr) return NULL;
    int i = 0;
    while (num) {
        if ((num & 1) == 0) {
            binaryStr[i] = '0';
        } else {
            binaryStr[i] = '1';
        }
        num >>= 1;
        i++;
    }
    binaryStr[i] = '\0';
    return str_rev(binaryStr);
}

long hexToDec(char *str) {
    int i = 0, size = strlen(str);
    long result = 0;
    
    while (str[i] != 0) {
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0') * (1 << (4 * (size-1-i)));
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - '7') * (1 << (4 * (size-1-i)));
        }
        i++;
    }
    return result;
}

char *decToHex(long num) {
    long quotient;
    int i = 0, reminder;
    char *hexStr = malloc(32);
    quotient = num;
    while(quotient != 0){
      reminder = quotient % 16;
      if(reminder < 10) {
        reminder += '0';
      } else {
         reminder += '7';
      }
      hexStr[i] = reminder;
      quotient = quotient / 16;
      i++;
    }
    hexStr[i+1] = '\0';
    return str_rev(hexStr);
}

char *str_rev(char *str) {
    int i = 0, j = strlen(str) - 1;
    char c;
    while (j > i) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return str;
}