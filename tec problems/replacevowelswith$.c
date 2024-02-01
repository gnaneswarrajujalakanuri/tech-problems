#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter the string: ");
    fgets(a,100,stdin);
    if(a[strlen(a) -1] == '\n'){
        a[strlen(a)-1] = '\0';   
        }
    printf("you entered %s",a);
    for(int i = 0;i<strlen(a);i++){
        char ch = a[i];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            a[i] = '$'; // Replace vowel with '$'
        }
    }
    printf("The string after replacing is : %s",a);
}