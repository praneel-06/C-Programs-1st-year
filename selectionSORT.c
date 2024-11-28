#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100],n,i,j,small,pos;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if (small>a[j]){
                small=a[j];
                pos=j;
            }
        }
        a[pos]=a[i];
        a[i]=small;
    }
    printf("sorted array is as follows: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    
}
