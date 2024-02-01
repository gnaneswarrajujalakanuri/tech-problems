#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int count = 0;
    printf("Enter the string: ");
    fgets(a,100,stdin);
    if(a[strlen(a) -1] == '\n'){
        a[strlen(a)-1] = '\0';   
        }
    printf("\nyou entered %s",a);
    for(int i = 0;i<strlen(a);i++)
    {
    if(((int)a[i] >= 33 && (int)a[i] <= 47)  || ((int)a[i] >= 58 && (int)a[i] <= 64 )) {
            count++;
        }
    }
    printf("\nThe no of special characters in %s is %d",a,count);
}