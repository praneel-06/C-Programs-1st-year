#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100],i,n,*r;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    r=&a[0];
    for(i=1;i<n;i++){
        if(*(a+i)>*r){
            r=a+i;
        }
    }
    printf("%d",*r);

}