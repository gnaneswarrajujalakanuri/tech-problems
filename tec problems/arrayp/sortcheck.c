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
    int flag = 0;
    int i = 0;
    while(flag == 0 && i < n-1){
        if(arr[i] <= arr[i+1])
        flag = 1;
        break;
        i++;
    }
    if(flag)
    printf("sorted");
    else
    printf("Not sorted");
}