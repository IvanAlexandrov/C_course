#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *strrev(char *str, char *reversed, int start, int end);

int main(int argc, char** argv) {
    char *str = "Recursion";
    char output[256];
    int strSize = strlen(str);
    char *reversed = strrev(str, output, 0, strSize);
    printf("%s", reversed);
    return (EXIT_SUCCESS);
}

char *strrev(char *str, char *reversed, int start, int end) {
    if (end >= 0) {
        reversed[start] = str[end-1];
        return strrev(str, reversed, start+1, end -1);
    }
    return reversed;
}

