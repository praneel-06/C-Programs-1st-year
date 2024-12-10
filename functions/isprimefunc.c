#include <stdio.h>
#include <stdlib.h>

int isprime(int n){
    int i;
    if(n<2){
        printf("number is neither prime nor composite ");
        exit(0);
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(isprime(n)){
        printf("number is composite\n");
    }
    else{
        printf("number is prime\n");
    }
    int N,i;
    printf("Enter N to find first N prime numbers: ");
    scanf("%d",&N);
    for(i=2;i<=N;i++){
        if(!isprime(i)){
        printf("%d ",i);
        }
        
    }

}