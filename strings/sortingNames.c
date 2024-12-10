#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,i,j;
    char str[100][100],temp[100];
    printf("enter number of words: ");
    scanf("%d",&n);
    printf("enter names of strings: ");
    for(i=0;i<n;i++){
        gets(str[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("the names in alphabetical order is as follows: ");
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }

}