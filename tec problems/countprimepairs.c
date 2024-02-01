#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isprime(int num){
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main(){
    int number;
    printf("Enter the range: ");
    scanf("%d",&number);
    int diff;
    printf("Enter the difference you want: ");
    scanf("%d",&diff);
    int count = 0;
    printf("The pairs are: ");
    for(int i = 0;i<= number;i++){
        if((isprime(i) && isprime(i+diff))){
            printf("\n(%d,%d)",i , i+diff);
            count++;
        }
    }
    printf("\nThe no of prime pairs are: %d",count);
}
