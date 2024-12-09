#include <stdio.h>
#include <stdlib.h>

//pointer basically stores the ADDRESS of the variable its pointing to

int main(){
    int a=5; //in some memory location for variable a, value 5 is stored
    int* x=&a; //pointer x is another memory location(meaning it has its own location), value is address of a
    printf("%p\n",&a);  //prints address of a
    printf("%p\n",x);  //prints address of a
    printf("%p\n",&x); //prints address of x
    printf("%d",*x); //prints value present in a
    

}