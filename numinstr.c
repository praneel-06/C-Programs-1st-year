#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,n,k=0;;
    char a[100],b[100];
    printf("enter a string: ");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]>=48 && a[i]<=57){
            b[k]=a[i];
            k++;
        }
    }
    printf("%s",b);    
}