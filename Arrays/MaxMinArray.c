#include<stdio.h>
int main(){

   int arr[5] ;
   for(int i = 0;i<5;i++){
    printf("\nEnter the %dth element : ",i+1);
    scanf("%d",&arr[i]);
   }
 
    int max = arr[0];
    int min = arr[0];

    for(int i = 1;i<5;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i = 1;i<5;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("\nThe maximum number is : %d",max);
    printf("\nThe minimum number is : %d",min);

    return 0;
}