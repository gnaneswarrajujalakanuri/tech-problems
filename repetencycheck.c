#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    scanf("%d",&size);
    int *arr = malloc(sizeof(int)*size);
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int *arr1 = malloc(sizeof(int)*size);
    for(int i = 0;i<size;i++){
        arr1[i] = 0;
    }
    for(int i = 0;i<size;i++){
        arr1[arr[i]]++;
    }
    int flag = 0;
    for(int i = 0;i<size;i++){
        if(arr1[i] > 1){
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }
    
    if(flag){
        printf("True");
    }else{
        printf("False");
    }
}