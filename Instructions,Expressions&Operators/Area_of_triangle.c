#include<stdio.h>
int main(){
    int height,base;
    printf("\nEnter the height: ");
    scanf("%d",&height);
    printf("\nEnter the base: ");
    scanf("%d",&base);
    int c = 0.5*height*base;
    printf("\nThe area of the triangle is : %d",c);

    return 0;
}