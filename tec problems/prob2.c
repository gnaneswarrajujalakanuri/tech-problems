#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int temp = number;
    int sum = 0;
    while(number>0){
        sum += number%10;
        number /= 10;
    }
    if(temp % sum == 0){
        printf("Ha");
    }
    else{
        printf("not Ha");
    }
}