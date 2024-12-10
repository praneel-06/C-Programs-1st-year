#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100],b[100],c[100],n,i,j,k=0;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter array1 elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter array2 elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
                break;
            }
        }
    }
    printf("intersection of 2 arrays is: ");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
}