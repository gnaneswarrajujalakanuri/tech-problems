#include<stdio.h>
#include<string.h>
int digitcounter(char []);
int main(){
    char a[100];
    printf("Enter the sentence: ");
    fgets(a,sizeof(a),stdin);
    if(a[strlen(a) - 1] == '\n'){
        a[strlen(a) - 1] = '\0';
    }
    printf("The sentence you entered is %s",a);
    int digitcount = digitcounter(a);
    printf("\nThe no of digits in the sentence is %d", digitcount);
}
int digitcounter(char sen[]){
    int count = 0;
    for(int i = 0;i<= strlen(sen);i++){
        if((int)sen[i] >= 48 && (int)sen[i] <= 57 ){
            count++;
        }
    }
    return count;
}