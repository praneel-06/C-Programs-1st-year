#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}
int main(){
    int n;
    printf("enter n to find sum of n terms: ");
    scanf("%d",&n);
    printf("sum of first %d numbers is %d",n,sum(n));

}