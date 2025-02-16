#include <stdio.h>

struct student{
    int rollno;
    int age;
    int total;
};

int main(){
    int i;
    struct student s[3];
    printf("enter values: ");
    for(i=0;i<3;i++){
        scanf("%d %d %d",&s[i].rollno,&s[i].age,&s[i].total);
    }
    for(i=0;i<3;i++){
        printf("%d %d %d",s[i].rollno,s[i].age,s[i].total );
    }
}