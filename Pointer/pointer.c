#include<stdio.h>
int main(){
    // int i = 4;
    // printf("\nAdress of i: %p", &i);
    // printf("\nvalue of i : %d",i);
    // printf("\nvalue of i : %d",*(&i));
    // int *ptr = &i;
    // printf("\nAddress of i: %p",ptr);
    // printf("\nValue of i: %d",*ptr);
    
    int a = 4;
    int *y = &a;
    printf("\nValue of a : %d", a);
    printf("\nValue of a :%d",*y);

    printf("\nAddress in random integer of a: %d", &a);
    printf("\nAddress in random integer of a:%d",y);

    printf("\nAddress of a : %p", &a);
    printf("\nAddress of a : %p",y);

    printf("\nnValue in address of a:%p",*y);
    printf("\nValue in address of a: %p", a);
    
    printf("\nAddress in random integer of y: %d",&y);
    printf("\nAddress of y: %p",&y);
    
    

    


  return 0;
}