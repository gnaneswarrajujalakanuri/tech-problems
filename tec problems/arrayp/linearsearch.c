#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter the element you want to search: ");
    scanf("%d",&num);
    int index = 0,flag = 0;
    for(int i = 0;i<n;i++){
        if(num == arr[i]){
            flag = 1;
            index = i;
        }
    }
    if(flag)
        printf("Found"  " and the index is %d",index);
    else
        printf("not found");


}
