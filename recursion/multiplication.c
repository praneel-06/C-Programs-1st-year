#include <stdio.h>
#include <stdlib.h>

int mult(int a,int b){
    if(b==0){
        return 0;
    }
    return 2 + mult(a,b-1);
}

int main(){
    int a,b,result;
    printf("enter values of a and b:");
    scanf("%d%d",&a,&b);
    mult(a,b);
    result=mult(a,b);
    printf("%d",result);
    
}
