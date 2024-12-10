#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100],i,n,MAX,max;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter array elements in order: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    MAX=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(MAX<a[(i+1)]){
            max=MAX;
            MAX=a[i+1];
        }
    }
    printf("the 2nd largest element is %d",max);
}