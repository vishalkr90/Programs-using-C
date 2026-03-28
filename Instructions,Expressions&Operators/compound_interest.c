#include<stdio.h>
int main(){
    float principle,rate,time;
    printf("\nWelcome to Compound interest calculator ");
    printf("\nEnter principle : ");
    scanf("%f",&principle);
    printf("\nEnter rate: ");
    scanf("%f",&rate);
    printf("\nEnter time : ");
    scanf("%f",&time);
    float PI = principle*pow((1+rate/100),time);
    printf("\nThe simple interest is : %.2f",PI);

    return 0;
}