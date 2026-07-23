#include<stdio.h>
int square(int n){
    printf("%d \n",sizeof(n));
    printf("%d \n",sizeof(int));
    return n*n;
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int value = square(num);
    printf("Square is : %d",value);
}