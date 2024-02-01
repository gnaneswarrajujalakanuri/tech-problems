#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    scanf("%d",&size);
    int *arr = malloc(sizeof(int)*size);
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int zcount = 0,ocount = 0;
    for(int i = 0;i<size;i++){
        if(arr[i] == 0){
            zcount += 1;
        }else if(arr[i] == 1){
            ocount += 1;
        }
    }
    while((zcount + ocount) != 0){
    if(zcount > 0){
        printf("%d",0);
    }
    else if(zcount = 0 || ocount >= 0){
        printf("%d",1);
        ocount--;
    }        
    zcount--;

    }
}