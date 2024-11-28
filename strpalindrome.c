#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,i,isP=1;
    char a[100];
    printf("enter a string: ");
    gets(a);
    n=strlen(a);
    for(i=0;i<n/2;i++){
        isP=1;
        if(a[i]!=a[n-i-1]){
            isP=0;
            break;
        }
    }
    printf("%d\n",isP);
    if(isP){
        printf("string is palindrome");
    }
    else{
        printf("string is not a palindrome");
    }
    
}