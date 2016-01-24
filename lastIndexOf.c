#include <stdio.h>
#include <stdlib.h>

int lastIndexOf(char* ,int, char);

int main(int argc, char** argv) {
    char str[256];
    char ch;
    fgets(str, 256, stdin);
    scanf("%c", &ch);
    int size = sizeof(str) / sizeof(char);
    int result = lastIndexOf(str, size, ch);
    if (result != -1)
        printf("%d", result);
    else 
        printf("Character not found!");
    return (EXIT_SUCCESS);
}

int lastIndexOf(char *str, int size, char ch) {
    if (size <= 0)
            return -1;
    int i;
    for (i = size -1; i>=0; i--) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}
