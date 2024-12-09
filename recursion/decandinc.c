#include <stdio.h>
#include <stdlib.h>

void decreasing(int n){
    if(n==0){
        return;
    }
    printf("%d",n);
    decreasing(n-1);
    return;
}
void increasing(int n){
    if(n==0){
        return;
    }
    increasing(n-1);
    printf("%d",n);
    return;
}
int main(){
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("1 for inc and 2 for dec\n");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        increasing(n);
        return 0;
    
    case 2:
        decreasing(n);
        return 0;
    }

}