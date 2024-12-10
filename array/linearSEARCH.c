#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100],n,i,x,found=0;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter number to be searched from array: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            found=1;
        }
        if(found){
            printf("the position of element %d is %d",x,(i+1));
            exit(0);
        }
    }
}