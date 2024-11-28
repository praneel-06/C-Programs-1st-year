#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[200],i,temp,n,k,t,j;
    scanf("%d",&n);
    if(n<1 || n>105){
        printf("-1");
        exit(0);
    }
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    scanf("%d",&k);
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(nums[i]<-231 || nums[i]>231){
            printf("-1");
            exit(0);
        }
        for(j=i+1;j<n;j++){
            if (nums[i]==nums[j]){
                printf("-1");
                exit(0);
            }
        }
    }
    if(k<0 || k>n || t<-231 || t>231){
        printf("-1");
        exit(0);
    }
    
    for(i=0;i<n/2;i++){
        temp=nums[i];
        nums[i]=nums[n-i-1];
        nums[n-i-1]=temp;
    }
    
    for(i=0;i<k/2;i++){
        temp=nums[i];
        nums[i]=nums[k-i-1];
        nums[k-i-1]=temp;
    }
    
    for(i=k,j=0;i<(n+k)/2;i++,j++){
        temp=nums[i];
        nums[i]=nums[n-j-1];
        nums[n-j-1]=temp;
    }
    
    for(i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        if(nums[i]==t){
            printf("%d",i);
            break;
        }
    }
return 0;