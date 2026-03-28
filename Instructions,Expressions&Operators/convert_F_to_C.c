#include<stdio.h>
int main(){

    float c,f;
    printf("Enter the temp in Fehrenheit: ");
    scanf("%f",&f);

     c = (f - 32)*5/9;
    printf("The temp in Celcius is : %f",c);

    return 0;
}