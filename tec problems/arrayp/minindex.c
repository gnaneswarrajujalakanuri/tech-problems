#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *arr = malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0],index;
    for(int i = 0;i<n;i++){
        if(min > arr[i])
        index = i;
    }
    printf("The index of the minimum element: %d",index);
}