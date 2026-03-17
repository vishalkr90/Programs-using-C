#include<stdio.h>
int main(){

    int marks[10];
    int no_of_students = 10;
    for(int i = 0; i< no_of_students ;i++){
    printf("Please enter the marks of students %d:",(i+1));
    scanf("%d",&marks[i]);
    }
    for(int i = 0; i< no_of_students ; i++){
        printf("\nMarks of students %d are: %d",(i+1),marks[i]);
    }
     

    return 0;
}