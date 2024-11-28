#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100],b[100];
    int i=0;
    printf("enter a word/sentence: ");
    gets(a);
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("%s and %s",a,b);
}