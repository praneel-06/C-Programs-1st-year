#include <stdio.h>
#include <stdlib.h>
void revnum(int n);
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    revnum(n);

}
void revnum(int n){
    int rem,r=0;
    while(n>0){
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    printf("%d",r);
}