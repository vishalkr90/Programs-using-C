#include<stdio.h>
int main(){
    int first,second,temp;
    printf("\nEnter first number: ");
    scanf("%d",&first);
    printf("\nEnter second number: ");
    scanf("%d",&second);

    printf("\nBefore swapping the first : %d and second : %d ",first,second);
    temp = first;
    first = second;
    second = temp;
    printf("\nAfter swapping the first : %d and second : %d ",first,second);

    return 0;
}