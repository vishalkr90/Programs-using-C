#include<stdio.h>
int main(){
   int num;
   printf("Enter the number: ");
   scanf("%d",&num);
   if(num==0){
    printf("\nThe number is zero");
   }
   if(num>0){
    printf("\nThe number is positive");
   }
   if(num<0){
    printf("\nThe number is negative");

   }


    return 0;
}