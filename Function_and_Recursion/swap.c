#include<stdio.h>

    void swap(int, int);

    int main(){

    swap(4,5);

    return 0;
}

   void swap(int first,int second){
    printf("first : %d, second : %d",first,second);
     int temp = first;
       first = second;
       second = temp;
       printf("\nfirst : %d, second : %d",first,second);
   }