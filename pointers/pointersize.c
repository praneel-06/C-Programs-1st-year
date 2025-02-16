#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=10;
    int *p=&n;
    printf("%d\n",p);
    printf("%d\n",&p);
}
