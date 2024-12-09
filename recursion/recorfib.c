#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
    int rem=0;
    if(a%b==0){
        printf("%d\n",b);
        return b;
    }
    rem=a%b;
    return gcd(b,rem);
}
void fib(int x, int a, int b){
    if(x==0){
        return ;
    }
    printf("%d ",b);
    return fib(x-1,b,a+b);
}


int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        char a;
        getchar();
        scanf("%c",&a);
        if(a=='G'){
            int a,b;
            scanf("%d %d",&a,&b);
            gcd(a,b);
        }
        if(a=='F'){
            int x;
            scanf("%d",&x);
            fib(x,1,0);
            printf("\n");
        }

    }


}