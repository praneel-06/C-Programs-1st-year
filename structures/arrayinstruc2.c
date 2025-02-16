#include <stdio.h>
#include <stdlib.h>
struct student{
    int marks[3];
    int total;
};

int main(){
    int i,j;
    struct student s[2];
    s[0].total =0;
    s[1].total =0;

    for(i=0;i<2;i++){
        printf("s[%d]",i);
        for(j=0;j<3;j++){
            scanf("%d",&s[i].marks[j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            s[i].total = s[i].total+ s[i].marks[j];
        }


    }
    printf("%d",s[0].total);
    
}