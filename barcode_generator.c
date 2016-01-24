#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BARCODE_LENGTH 14
#define SYMBOLS_LENGTH strlen(SYMBOLS)

const char *SYMBOLS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int indexOf(const char*, char c);
int check_code(char *start_code, int (*func)(char, int*));
int isValidSymbol(char c, int *error);
void explode_barcode(const char*, char**, char**);
void build_code(const char *start, char *trail, int codes_count);

int main(int argc, char** argv) {
    printf("Enter a start barcode: ");
    char start_barcode[BARCODE_LENGTH];
    fgets(start_barcode, BARCODE_LENGTH, stdin);
    printf("Set how many codes you want: ");
    int codes_count;
    scanf("%d", &codes_count);
    if (check_code(start_barcode, &isValidSymbol)) {
        char *start;
        char *trail;
        explode_barcode(start_barcode, &start, &trail);
        printf("%-15s|%s%s\n", "START BARCODE", start, trail);
        if (start && trail) {
            build_code(start, trail, codes_count);
            free(start);
            free(trail);
        } 
    }
    //Closing these because valgrind :)
    fclose(stdin);
    fclose(stderr);
    fclose(stdout);
    return (EXIT_SUCCESS);
}

void explode_barcode(const char *code, char **start, char **trail) {
    int code_size = strlen(code);
    int i, j = 0;
    *start = calloc(7, sizeof(char));
    *trail = calloc(8, sizeof(char));
    if (!start || !trail) {
        printf("Not enough memory\n");
        return;
    }
    start[6] = '\0';
    trail[7] = '\0';
    for (i = 0; i < code_size; i++) {
        if (i < 6) {
            *(*start + i) = code[i];
        } else {
            *(*trail + j) = code[i];
            j++;
        }
    }
}

int isValidSymbol(char c, int *error) {
    int i;
    *error = 0;
    for (i = 0; i < SYMBOLS_LENGTH; i++) {
        if (SYMBOLS[i] == c)
            return 1;
    }
    *error = 1;
    return 0;
}

int check_code(char *start_code, int (*func)(char, int*)) {
    int index = 0, error;
    for (index = 0; index < BARCODE_LENGTH - 1; index++) {
        (*func)(start_code[index], &error);
        if (error && index < BARCODE_LENGTH - 1) {
            printf("Invalid symbol in bar code\n");
            return 0;
        }
    }
    return 1;
}

int indexOf(const char* symbols, char c) {
    int i;
    for (i = 0; i < SYMBOLS_LENGTH; i++) {
        if (symbols[i] == c) {
            return i;
        }
    }
    return -1;
}

void build_code(const char *start, char *trail, int codes_count) {
    FILE *fp;
    char *filename = "barcode.txt";
    fp = fopen(filename, "w");
    if (fp) {
        // write out the given code
        fprintf(fp, "%s%s\n", start, trail);
        while (codes_count > 1) {
            int char1 = indexOf(SYMBOLS, trail[0]);
            int char2 = indexOf(SYMBOLS, trail[1]);
            int char3 = indexOf(SYMBOLS, trail[2]);
            int char4 = indexOf(SYMBOLS, trail[3]);
            int char5 = indexOf(SYMBOLS, trail[4]);
            int char6 = indexOf(SYMBOLS, trail[5]);
            int char7 = indexOf(SYMBOLS, trail[6]);
            //last two digits always will be incremented
            char7 += 1;
            if (char7 == 36) {
                char7 = 0;
            }
            char6 += 1;
            if (char6 == 36) {
                char6 = 0;
                char5 += 1;
                char7 += 1;
                if (char7 == 36) {
                    char7 = 0;
                }
            }
            if (char5 == 36) {
                char5 = 0;
                char4 += 1;
                char7 += 1;
                if (char7 == 36) {
                    char7 = 0;
                }
            }
            if (char4 == 36) {
                char4 = 0;
                char3 += 1;
                char7 += 1;
                if (char7 == 36) {
                    char7 = 0;
                }
            }
            if (char3 == 36) {
                char3 = 0;
                char2 += 1;
                char7 += 1;
                if (char7 == 36) {
                    char7 = 0;
                }
            }
            if (char2 == 36) {
                char2 = 0;
                char1 += 1;
                char7 += 1;
                if (char7 == 36) {
                    char7 = 0;
                }
            }
            //build code
            trail[0] = SYMBOLS[char1];
            trail[1] = SYMBOLS[char2];
            trail[2] = SYMBOLS[char3];
            trail[3] = SYMBOLS[char4];
            trail[4] = SYMBOLS[char5];
            trail[5] = SYMBOLS[char6];
            trail[6] = SYMBOLS[char7];
            fprintf(fp, "%s%s\n", start, trail);
            codes_count--;
        }
        printf("%-15s|%s%s\n", "LAST BARCODE", start, trail);
        fclose(fp);
    }
}