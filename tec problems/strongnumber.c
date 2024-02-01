#include<stdio.h>
int factorial(int );
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int y = number;
    int sum =  0,digit;
    while(number>0){
        digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }
    if(y == sum){
    printf(" Its a strongnumber");
    }
    else{
        printf("Its not strongnumber");
    }
}
    int factorial(int n){
        int fact = 1;
        while(n!=0){
            fact *= n;
            n--;
        }
        return fact;
    }