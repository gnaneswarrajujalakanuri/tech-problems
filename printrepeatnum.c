#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    scanf("%d",&size);
    int *arr = malloc(sizeof(int)*size);
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nYou entered array is: ");
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    int *arr1 = malloc(sizeof(int)*size);
    for(int i = 0;i<=size;i++){
        arr1[i] = 0;
    }
    for(int i = 0;i<=size;i++){
        arr1[arr[i]]++;
    }
    for(int i = 0;i<size;i++){
        printf("\n%d  --> %d\n",arr[i],arr1[i]);
    }
}