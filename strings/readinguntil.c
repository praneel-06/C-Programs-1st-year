#include <stdio.h>
#include <stdlib.h>

int main(){
    const int max=2000;
    char c[max];
    printf("enter string: ");
    scanf("%[^#]",c);
    printf("you entered\n: ");
    printf("%s",c);
    return 0;




}