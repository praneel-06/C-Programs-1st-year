#include <stdio.h>
#include <stdlib.h>

int main(){
    char word[]={'H','e','l','l','o'};
    char word2[]="HELLO";
    char input[100];
    char input2[100];
    printf("%s\n",word);
    puts(word2);
    printf("\n");
    gets(input);
    gets(input2);
    printf("%s,%s",input,input2);
    

}