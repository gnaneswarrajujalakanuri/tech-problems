#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr = malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }else{
                flag = 0;
            }
        }
    }
    if(!flag){
        for(int i = 0;i<n;i++){
            scanf("%d ",arr[i] );
        }
    }
}