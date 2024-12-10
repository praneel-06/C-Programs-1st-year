#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    int factorial=1,i;
    for(i=n;i>0;i--){
        factorial=factorial*i;
    }
    return (factorial);
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",fact(n));

}