#include <stdio.h>

int main() {
    int a[100],i,n,x,j;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter elements in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter number you want to delete from array: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            for(j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}