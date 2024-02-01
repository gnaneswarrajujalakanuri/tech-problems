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
    int num;
    scanf("%d",&num);
    for(int i = num;i< n;i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0;i< num;i++){
        printf("%d ",arr[i]);
    }
} 