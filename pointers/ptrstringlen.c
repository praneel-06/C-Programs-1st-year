#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[10];
    char *ptr= &a;
    printf("enter word:");
    gets(a);
    int j=0;
    while(*ptr!='\0'){
        ++ptr;
    }
    printf("the length of the string is %d",ptr-a);

}