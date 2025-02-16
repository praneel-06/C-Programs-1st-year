#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100],cn=0,ca=0,sum=0;
    int i;
    printf("enter string with numbers: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=48 && a[i]<=57){
            cn++;
            sum=sum+a[i]-48;
        }
    }   
    printf("sum of numbers in string is %d",sum);
}