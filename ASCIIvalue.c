#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    for(c=65;c<=122;c++){
        if(c>90&&c<97){
            continue;
        }
        printf("%c -",c);
        printf("%d\n",c);
    }
}