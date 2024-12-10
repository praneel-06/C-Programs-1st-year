#include <stdio.h>
#include <stdlib.h>

int main(){
    char sen[100];
    int i,strlen=0,j;
    printf("enter string: ");
    gets(sen);
    while(sen[strlen]!='\0'){
        strlen++;
    }
    
    for(i=0;i<strlen;i++){
        if(sen[i]==' '){
            for(j=i;j<strlen-1;j++){
                sen[j]=sen[j+1];
            }
            sen[j]='\0';
            i--;
        }
    }
    printf("the string without spaces is: ");
    puts(sen);
}