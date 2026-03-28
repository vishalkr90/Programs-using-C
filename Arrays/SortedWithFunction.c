#include<stdio.h>

int is_sorted(int arr[],int size);

int main(){
    printf("Welcome to Sorting array");
    int arr1[6] = {1,2,3,4,4,5};
    int arr2[5] = {9,7,7,6,5};
    int arr3[4] = {234,324,532,134};

    if(is_sorted(arr1,6)){
        printf("\nFirst array is sorted");
    }
    else{
        printf("First Array is not sorted");
    }
    if(is_sorted(arr2,5)){
        printf("\nSecond array is sorted");
    }
    else{
        printf("Second Array is not sorted");
    }

    if(is_sorted(arr3,4)){
        printf("\nThird array is sorted");
    }
    else{
        printf("\nThird Array is not sorted");
    }

    return 0 ;
}

is_sorted(int arr[],int size){
    int increasing = 1;
    int decreasing = 1;

    for(int i = 1;i<size;i++){
        if(arr[i]<arr[i-1]){
            increasing = 0;
        }
        else if(arr[i]>arr[i-1]){
            decreasing = 0;
        }
    }
    return increasing || decreasing;
}