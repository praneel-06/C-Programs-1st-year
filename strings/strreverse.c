#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100];
    int n=0,i=0,temp;
    printf("enter a string: ");
    gets(a);
    while(a[i]!='\0'){
        n++;
        i++;
    }
    printf("%d\n",n);
    for(i=0;i<(n/2);i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("reversed string is %s",a);



}