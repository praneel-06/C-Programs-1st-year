#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100],i,n,max;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int *p=&a[0];
    for(i=1;i<n;i++){
        if(*p<a[i]){
            p=&a[i];
        }
    }
    printf("max value is %d",*p);
}