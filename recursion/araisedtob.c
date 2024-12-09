#include <stdio.h>
#include <stdlib.h>

int power(int a,int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}

int main(){
    int a,b;
    printf("enter values of a and b to find a^b: ");
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));

}