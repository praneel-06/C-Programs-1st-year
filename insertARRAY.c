#include <stdio.h>

int main() {
    int a[100],i,pos,n,x;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter new element in array and its position: ");
    scanf("%d%d",&x,&pos);
    for(i=n;i>pos-1;i--){
        a[i]=a[i-1];
    }
    n=n+1;
    a[pos-1]=x;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}