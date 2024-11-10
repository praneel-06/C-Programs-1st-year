#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100],n,pos,i;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter position to remove from array(1-%d): ",n);
    scanf("%d",&pos);
    if (pos>n || pos<1){
        printf("invalid position");
        exit(0);
    }
    for(i=pos-1;i<n;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    printf("the updated matrix is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]); 
    }
}