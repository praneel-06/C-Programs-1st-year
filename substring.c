#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[100],b[100];
    int n,space[100],s=0,i1=0,i=0,j=0,k=0,s1=0,l=-1,n2;
    printf("enter main string: ");
    gets(a);
    printf("enter substring: ");
    gets(b);
    while(a[i]!='\0'){
        if(a[i]== ' '){
            s=s+1;
        }
        while(b[j]!='\0'){
            if(a[i]==b[j]){
                j++;
                i++;
                continue;
            }
            if (b[j]=='\0'){
                k=1;
            }
            else{
                k=0;
            }
        }
        if (k){
            l++;
            space[l]=s+1;
        }
        i++;
    }
    
}