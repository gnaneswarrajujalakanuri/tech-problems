#include<stdio.h>
#include<string.h>

int lengthOfLastWord(char* s, int l) {
    int len = l;
    int lastwordlength = 0;
    for (int i = len - 1; (i >= 0 && s[i] != ' '); i--) {
        lastwordlength++;
    }
    return lastwordlength;
}

int main() {
    char str[100];
    fgets(str, 100, stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int length = strlen(str);
    
    // Skip trailing spaces
    while (length > 0 && str[length - 1] == ' ') {
        length--;
    }

    printf("The string entered is: %s", str);

    int lastword = lengthOfLastWord(str, length);
    printf("\nThe length of the last word is %d\n", lastword);

    return 0;
}
