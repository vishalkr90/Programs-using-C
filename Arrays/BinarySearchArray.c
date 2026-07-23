#include<stdio.h>
int main(){
    int arr[] = {12,23,54,76,89};
    int key = 23;
    int n = 5;
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
        mid =(low+high)/2;
        if(arr[mid] == key){
            printf("Element found at index %d",mid);
            return 0;
        }
        else if(key < arr[mid]){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
        
    }
    printf("Element not found");

    return 0;
}