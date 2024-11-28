#include <stdio.h>
#include <stdlib.h>
int main(){
    char a[100];
    int i=0,count=0;
    printf("enter a sentence: ");
    gets(a);
    while(a[i]!='\0'){
        if(a[i]==' '){
            count++;
        }
        i++;
    }
    printf("number of words in sentence %s is %d",a,(count+1));
}