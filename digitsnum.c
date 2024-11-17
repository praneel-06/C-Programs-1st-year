#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[100],n,i,n1,num;
    printf("enter number of digits of number ");
    scanf("%d",&n);
    printf("enter digits of number: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    n=n1;
    for(i=0;i<n;i++){
        num=a[i]*pow(10,n1);
        n1--;
    }
    printf("%d",num);


}
    
    
