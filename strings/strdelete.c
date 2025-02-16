#include <stdio.h>
#include <stdlib.h>

int main(){
    char m[100],s[100];
    int i,j,m_len=0,s_len=0,found,k;
    printf("enter main string: ");
    gets(m);
    printf("enter substring: ");
    gets(s);
    while(m[m_len]!='\0'){
        m_len++;
    }
    while(s[s_len]!='\0'){
        s_len++;
    }
    for(i=0;i<m_len;i++){
        found =1;
        for(j=0;j<s_len;j++){
            if(m[i+j]!=s[j]){
                found=0;
                break;
            }
        }
        if (found){
            for(j=0;j<s_len+1;j++){
                for(k=i;k<m_len-1;k++){
                    m[k]=m[k+1];
                }
                m[k]='\0';
            }
        }
    }
    printf("the string without substring is: ");
    puts(m);
}