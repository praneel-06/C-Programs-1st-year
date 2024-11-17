#include <stdio.h>


int main(){
    int n,i,rem,n1,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    n1=n;
    while(n1>=10){
        sum=0;
        while(n1>0){
            rem=n1%10;
            sum=sum+rem;
            n1=n1/10;
        }
        n1=sum;
    }
    printf("generic root of %d is %d",n,sum);
}