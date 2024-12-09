#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=5;
    int* x= &a;
    printf("%d\n",*x);
    *x=20;
    printf("%d",*x);
}