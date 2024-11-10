#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int n,fact=1,i,j;
    float x,sum=0.0;
    printf("enter value of x in sinx(degrees): ");
    scanf("%f",&x);
    printf("number of terms in sinx series: ");
    scanf("%d",&n);
    x=0.017453*x;
    for(i=1;i<=n;i++){
        fact=1;
        for(j=1;j<=2*i-1;++j){
            fact=fact*j;
        }
        sum=sum + pow((-1),(i+1))*(pow(x,(2*i-1)))/fact;
    }
    printf("the value of sine series up to %d terms is: %f",n,sum);
}