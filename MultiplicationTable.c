#include <stdio.h>
int main(){
    int n,i,k,j;
    printf("enter number till which multiplication table is to be found: ");
    scanf("%d",&n);
    printf("enter number of terms for each number: ");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=n;j++){
            printf("%d x %d = %d\t",j,i,(j*i));
        }
        printf("\n");
    }
    return 0;
}