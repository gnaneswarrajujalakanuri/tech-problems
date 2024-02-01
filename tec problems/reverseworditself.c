#include<stdio.h>
#include<string.h>
void reversewords(char []);
void reverseword(char [],int ,int );
int main(){
    char str[100];
    printf("Enter the sentence: ");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
    printf("\nThe sentence you entered is: %s",str);
    reversewords(str);
    printf("\nSentence after reversing the words: %s",str);
}
void reverseword(char sn[], int st, int en){
    while(st < en){
        char temp = sn[st];
        sn[st] = sn[en];
        sn[en] = temp;
        st++;
        en--;
    }
}
void reversewords( char sen[]){
    int start = 0;
    for(int i = 0;i <=strlen(sen);i++){
        if(sen[i] == ' ' || sen[i] == '\0'){
            reverseword(sen,start,i-1);
            start = i + 1;
        }
    }
}