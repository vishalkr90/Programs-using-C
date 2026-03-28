#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Enter a valid number");
    }
   else if(num%2==0){
        printf("\nThe number is even");
    }
    else{
        printf("\nThe number is odd");
    }

    return 0;
}