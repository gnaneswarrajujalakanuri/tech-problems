#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *arr = malloc(sizeof(int) * size);
    for(int i = 0;i<size;i++){
        scanf("%d",arr[i]);
    }
    
}