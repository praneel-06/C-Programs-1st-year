
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Name:Praneel Chetlapalli\n");
    printf("RollNo:245805376\n");
    int n,a[100][100],p,b[100],k=0,temp,i,j,p1,i1,j1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&p);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[k++]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]<1 || a[i][j]>1000){
                printf("-1");
                exit(0);
            }
        }
    }
    for(i=0;i<k-1;i++){
        for(j=0;j<k-i-1;j++){
            if(b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    p1=b[p-1];
    for(i=0;i<k-1;i++){
        for(j=0;j<k-i-1;j++){
            if(a[i][j]==p1){
                i1=i;
                j1=j;
                break;
            }
        }
    }
    printf("%d %d %d",i1,j1,p1);


return 0;
}