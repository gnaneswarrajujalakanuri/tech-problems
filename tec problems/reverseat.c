#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    int n;
    scanf("%d",&n);
    for(int i = n;i<strlen(str);i++){
        printf("%c",str[i]);
    } 
    for(int i =0;i<n;i++){
        printf("%c",str[i]);
    }
}