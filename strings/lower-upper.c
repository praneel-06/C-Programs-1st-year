#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,n,x;
    char c[100];
    printf("enter string: ");
    gets(c);
    n=strlen(c);
    printf("uppercase(1) or lowercase(2): ");
    scanf("%d",&x);
    switch(x){
        case 1:
            for(i=0;i<n;i++){
                if(c[i]>=97 && c[i]<=122){
                c[i]=c[i]-32;
                }
            }
            break;
        case 2:
            for(i=0;i<n;i++){
                if(c[i]>=65 && c[i]<=90){
                    c[i]=c[i]+32;
                }
            }
            break;
    }
    printf("%s",c);
    
}