#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int sum = 0;
    int i = 1;
    for(int i = 0; i < number;i++){
        if(number%i == 0){
            sum += i;
        }
        
    }
    if(sum > number){
        printf("Its abudant");
    }
    else{
        printf("Its not abudant");
    }
}