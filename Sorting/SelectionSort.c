#include<stdio.h>
int main(){
    int arr[] = {43,53,22,65,11};
    int n = 5;
    printf("Before Sorting : ");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("\nAfter Sorting : ");
        for(int i = 0;i<n;i++){
            printf("%d ",arr[i]);
        }
    return 0;
}