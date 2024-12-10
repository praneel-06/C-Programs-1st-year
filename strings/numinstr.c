#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char studentName[50];
    int rollNumber;
    printf("Enter the student's name: ");
    gets(studentName);
    printf("Enter the student's roll no: ");
    scanf("%d",&rollNumber);
    printf("\n");
    printf("Student Details:\n");
    printf("Student Name: %s\n", studentName);
    printf("Roll Number: %d\n", rollNumber);
    int i,n,k=0;
    char a[100],b[100];
    printf("enter a string: ");
    getchar();
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]>=48 && a[i]<=57){
            b[k]=a[i];
            k++;
        }
    }
    printf("%s",b);    
}