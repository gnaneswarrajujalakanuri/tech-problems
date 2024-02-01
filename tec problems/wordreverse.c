#include<string.h>
#include<stdio.h>
void reversewords(char []);
int main(){
    char str[100];
    printf("Enter the sentence: ");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
    printf("The sentence you entered is: %s",str);
    reversewords(str);
    printf("\nThe sentence after reversing the words: %s",str);
}
void reversewords(char sen[]){
    int start = 0;
    for(int i = 0;i <= strlen(sen);i++){
        if(sen[i] == ' ' || sen[i] == '\0'){
            
        }
    }
}