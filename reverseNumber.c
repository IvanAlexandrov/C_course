#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double reverse(char *num, int *error);

int main(int argc, char** argv) {
    char num[20];
    int error;
    fgets(num, 20, stdin);
    double reversed = reverse(num, &error);
    if (error) {
        printf("invalid format");
    } else {
        printf("%.3lf", reversed);
    }
    return (EXIT_SUCCESS);
}
double reverse(char *num, int *error) {
    int i = 0, j = strlen(num) - 1;
    char *reminder;
    char c;
    while (j > i) {
        c = num[i];
        num[i] = num[j];
        num[j] = c;
        i++;
        j--;
    }
    double result = strtod(num, &reminder);
    if (*num  == *reminder) {
        *error = 1;
    } else {
        *error = 0;
    }
    return result;
}
 