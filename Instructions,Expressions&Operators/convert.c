#include<stdio.h>
int main(){
  int number;
  printf("\nEnter a number: ");
  scanf("%d",&number);
  float floating = number;
  printf("\nOriginal is : %d",number);
  printf("\nconverted number is : %f",floating);
  printf("\nconverted number is : %f",(float)number);

    return 0;
}