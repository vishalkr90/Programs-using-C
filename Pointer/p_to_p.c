#include<stdio.h>
int main(){
int a = 4;
int *b = &a;
int **c = &b;
// int **b = &b;
// printf("\n%d",b);
// printf("\n%d",&b);
// printf("\n%p",b);
// printf("\n%p",&b);
printf("\nAddress of b:%p",&b);
printf("\nAddress of b:%p",c);
printf("\nAddress of a: %p",b);
printf("\nAddress of a: %p",&a);
printf("\nValue of a: %d",*b);
printf("\nValue of a: %d",a);
printf("\nValue of a: %d",**c);

int x = 5;
int *f = x;
printf("\n%d",*f);
    return 0;
}