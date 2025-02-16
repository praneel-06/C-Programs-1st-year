#include <stdio.h>
#include <stdlib.h>

int sum(int a[],int n){
    int i,sum1=0;
    for(i=0;i<n;i++){
        sum1=sum1+a[i];
    }
    return sum1;
}
int main(){
    int a[100],i,n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the sum of elements in array is %d",sum(a,n));

}