#include<stdio.h>
#include<string.h>
int countwords(char []);
int main(){
    char str[100];
    printf("Enter the sentence: ");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
    printf("The string you entered is: %s",str);
    int wordcount = countwords(str);
    printf("\nThe words in sentence is %d",wordcount);
}
int countwords(char sen[]){
    int count = 0;
    int isword = 0;
    for(int i = 0;sen[i] != '\0';i++){
        if(sen[i] == ' ' || sen[i] == '\n' || sen[i] == '\0'){
            isword = 0;
        }
        else if((sen[i] >= 'a' && sen[i] <= 'z')||(sen[i] >= 'A' && sen[i] <= 'Z')){
            if(!isword){
                count++;
                isword = 1;
            }
        }
    }
    return count;
}