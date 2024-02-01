#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *arr = malloc(sizeof(int) * size);
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0;i<size/2;i++){
        if(arr[i] == arr[size-i-1]){
            count++;
        }
    }
    if(size/2 == count){
        printf("its p");
    }else{
        printf("its not p");
    }

}