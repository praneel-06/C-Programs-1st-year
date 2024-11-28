#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,rem,selfd=1,left,right,i,a[100],k=0;
    printf("left(>=1): ");
    scanf("%d",&left);
    printf("right(<=104): ");
    scanf("%d",&right);
    if(left<1 || right>104){
        printf("proper range not provided");
        exit(0);
    }
    for(i=left;i<=right;i++){
        n1=i;
        selfd=1;
        while(n1>0){
            rem=n1%10;
            if(rem==0 || i%rem!=0){
                selfd=0;
                break;
            }
            n1=n1/10;
        }
        if(selfd){
            a[k]=i;
            k++;
        }
    }
    printf("the self dividing numbers between the ranges %d - %d are: ",left,right);
    for(i=0;i<k;i++){
        printf("%d ",a[i]);
    }

}