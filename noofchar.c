#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100];
    int i=0,count=0;
    printf("enter a sentence/word: ");
    gets(a);
    while(a[i]!='\0'){
        count++;
        i++;
    }
    printf("number of character in %s is %d",a,count);
}