#include <stdio.h>

int main() {
    int n,i,j,k=1;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("floyds triangle till n=%d is:\n",n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
}