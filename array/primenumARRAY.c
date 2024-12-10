#include <stdio.h>

int main() {
    int a[100],isPrime=1,i,j,n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("prime numbers in array are: ");
    for(i=0;i<n;i++){
        isPrime=1;
        for(j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            printf("%d ",a[i]);
        }
    }
}