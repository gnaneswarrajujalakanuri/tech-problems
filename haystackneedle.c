#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int strStr(char * haystack, char * needle){
 int y = strlen(needle);
 int i = 0;
 while(i<sizeof(haystack)){
 if(strncmp(&haystack[i],needle,y) == 0)
     return i;
    i++;
 }
 return -1;
}
int main(){
    char haystack[100];
    printf("Enter the haystack: ");
    fgets(haystack,100,stdin);
    if(haystack[strlen(haystack) - 1] == '\n'){
        haystack[strlen(haystack) - 1] = '\0';
    }
    char needle[100];
    printf("Enter the needle: ");
    fgets(needle,100,stdin);
    if(needle[strlen(needle) - 1] == '\n'){
        needle[strlen(needle) - 1] = '\0';
    }
    int y = strStr(haystack,needle);
    printf("%d ",y);

}