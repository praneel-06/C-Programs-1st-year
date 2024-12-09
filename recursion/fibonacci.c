#include <stdio.h>
#include <stdlib.h>

int fib(int x, int a,int b){
    if(x==0){
        return 0;
    }
    printf("%d ",b);
    return fib(x-1,b,a+b);


}
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    return (fib(n,1,0));

}