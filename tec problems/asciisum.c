#include <stdio.h>
#include<string.h>
int main() {
    char str[100];  
    int asciiSum = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; ++i) {
        asciiSum += (int)str[i];
    }

    printf("Sum of ASCII values of each character: %d\n", asciiSum);

    return 0;
}
