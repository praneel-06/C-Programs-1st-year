#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[5]={2,3,4,5,6},j,sum=0;
    for(j=0;j<5;j++){
        sum = sum+ *(a+j);
    }
    printf("%d",sum);
}