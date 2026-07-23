#include<stdio.h>
int main(){

    int arr1[5] = {1,2,2,3,5};
    int arr2[5] = {8,7,7,4,3};

    int increasing = 1;
    int decreasing = 1;

    for(int i = 1;i<5;i++){
        if(arr1[i]>arr1[i-1]){
            decreasing = 0;
        }
    }

    for(int i = 1;i<5;i++){
        if(arr1[i]<arr1[i-1]){
            increasing = 0;
        }
    }
    printf("\n%d",increasing);
    printf("\n%d",decreasing);

    increasing = 1;
    decreasing = 1;

    for(int i = 1;i<5;i++){
        if(arr2[i]>arr2[i-1]){
            decreasing = 0;
        }
    }

    for(int i = 1;i<5;i++){
        if(arr2[i]<arr2[i-1]){
            increasing = 0;
        }
    }

    printf("\n%d",increasing);
    printf("\n%d",decreasing);


    return 0;
}