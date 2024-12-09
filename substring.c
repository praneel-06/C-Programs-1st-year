#include <stdio.h>

int main() {
    int n,m_len=0,s_len=0,i=0,j=0,found=1,f[100],count=0,k=0;
    char m[100],s[100];
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
        found=1;
        for(j=0;j<s_len;j++){
            if(m[i+j]!=s[j]){
                found=0;
                break;
            }
        }
        if(found){
            count++;
            f[k++]=i+1;
        }
    }
    printf("the number of times substring %s occured in %s is %d times in the following positions: ",s,m,count);
    
    for(i=0;i<k;i++){
        printf("%d ",f[i]);
    }
}