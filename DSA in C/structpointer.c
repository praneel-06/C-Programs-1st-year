#include <stdio.h>
#include <stdlib.h>
struct Example {
    int a;
    char b;
};
int main(){
    struct Example* ptr;
    printf("%p\n",ptr);
    if(ptr==NULL){
        printf("null");
    }
    struct Example e1;
    printf("%p",ptr);
}