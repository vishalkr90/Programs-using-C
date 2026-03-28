#include<stdio.h>
int main(){
    int first,second;
    printf("\nEnter first number: ");
    scanf("%d",&first);
    printf("\nEnter second number: ");
    scanf("%d",&second);

    printf("Here are the results of the operation\n");

    printf("\n%d + %d = %d",first,second,first + second);
    printf("\n%d - %d = %d",first,second,first - second);
    printf("\n%d * %d = %d",first,second,first * second);
    printf("\n%d / %d = %d",first,second,first / second);
   


    return 0;
}