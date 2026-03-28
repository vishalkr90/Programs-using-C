#include<stdio.h>
int main(){
    float principle,rate,time;
    printf("\nWelcome to simple interest calculator ");
    printf("\nEnter principle : ");
    scanf("%f",&principle);
    printf("\nEnter rate: ");
    scanf("%f",&rate);
    printf("\nEnter time : ");
    scanf("%f",&time);
    float SI = principle*rate*time/100;
    printf("\nThe simple interest is : %f",SI);
    printf("\nThe simple interest is : %.2f",SI);

    return 0;
}