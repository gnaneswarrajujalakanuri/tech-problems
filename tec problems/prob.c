#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
        int a = 1;
        int b = 2;
        int c;
    for(int i = 0;i<number;i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;

    }
}