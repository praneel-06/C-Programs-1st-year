#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }

}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("factorial of the number is %d",fact(n));
    return 0;
}