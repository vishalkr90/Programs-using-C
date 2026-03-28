#include<stdio.h>

int Occurence(int arr[],int size,int num);

int main(){

    int arr1[] = {3,3,5,2,2,5,8,8,3};
    int arr2[] = {3,23,23,5,5};
    
   Occurence(arr1,9,3);
   Occurence(arr2,5,0);



    return 0;
}

 int Occurence(int arr[],int size,int num){
    int counter = 0;
    for(int i = 0;i<size;i++){
        if(num==arr[i]){
          counter = counter + 1;
        }
    } 
    printf("\nThe Occurence is : %d",counter);
 }