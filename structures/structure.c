#include <stdio.h>
#include <stdlib.h>

int main(){
    struct studentinfo{
        int id;
        int age;
        char name[100];
        char gender;
        float cgpa;
    }s1={123,56,"Dan",'M',8.5},s2,s3;
    struct studentinfo s5;
    struct studentinfo s4={123,23,"damn ggs",'M',8.3};
    s5.age = 23;
    printf("%d %d %s %c %f",s4.id,s4.age,s4.name,s4.gender,s4.cgpa);
    printf("\n%d",s5.age);
}