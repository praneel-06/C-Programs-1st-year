#include <stdio.h>
#include <stdlib.h>

int rev(int n){
    int rem;
    static int n1=0;
    if(n==0){
        return n1;
    }
    rem=n%10;
    n1=n1*10+rem;
    return rev(n/10);
}

int main(){
    int n;
    printf("enter a number to reverse: ");
    scanf("%d",&n);
    printf("the returned number is %d",rev(n));

}