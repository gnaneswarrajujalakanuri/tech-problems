#include<stdio.h>
int main(){
    int a[10][10];
    int rowsize,columnsize;
    printf("Enter the rowsize: ");
    scanf("%d",&rowsize);
    printf("Enter the columnsize: ");
    scanf("%d",&columnsize);
    printf("Enter the elements to the matrix: ");
    for(int i = 0;i<rowsize;i++){
        for(int j = 0;j<columnsize;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i = 0;i<rowsize;i++){
        for(int j = 0;j<columnsize;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    int sum = 0;
    for(int i = 0;i<rowsize;i++){
        for(int j = 0;j<columnsize;j++){
            if(i == 0 || i == rowsize-1 || i+j == columnsize-1){
                sum += a[i][j];
            }
        }
    }
    printf("The zigzag sum is: %d",sum);
}