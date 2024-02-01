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
int count = 1;
for(int i = 0; i < rowsize; i++) {
    int largest = a[i][0]; 
    printf("\nThe largest in %d row is: ", count);
    for(int j = 1; j < columnsize; j++) {
        if (largest < a[i][j]) {
            largest = a[i][j];
        }
    }      
    printf("%d ", largest);
    count++;
}
}