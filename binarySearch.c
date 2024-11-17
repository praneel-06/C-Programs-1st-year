#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100],n,i,x,mid,lo,hi;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter array elements in order: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("find number to found in array: ");
    scanf("%d",&x);
    lo=a[0];
    hi=a[n-1];
    do
    {
        mid=(lo+hi)/2;
        if(a[mid]>x){
            hi=mid-1;
        }
        else if(a[mid]<x){
            lo=mid+1;
        }

    } while (x!=a[mid] && lo<=hi);
    if(x==a[mid]){
        printf("element has been found");
    }
    else{
        printf("element not present in array");
    }
    

}
    
