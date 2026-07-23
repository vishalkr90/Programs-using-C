// #include<stdio.h>
// int main(){
//     int arr[] = {44,65,23,76,54};
//     int max = arr[0];
//     int smax = arr[0];
//     for(int i = 1;i<5;i++){
//         if(arr[i] > max ){
//             max = arr[i];
//         }
//     }
//     for(int i = 1;i<5;i++){
//         if(arr[i]>smax && max > arr[i]){
//             smax = arr[i];
//         }
//     }
//     printf("The second maximum element is : %d",smax);

// }
//Leet code Question
#include<stdio.h>
#include<limits.h>
int getSecondLargest(int *arr, int n);
int main(){
    int arr[] = {10,10,5,88,89};
    int second = getSecondLargest(arr,5);
    printf("\nSecond max : %d",second);

}
int getSecondLargest(int *arr, int n) {
    // code here
    int max = INT_MIN;
    
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    printf("Max element is : %d",max);
    for(int i = 0;i<n;i++){
        if(arr[i]>smax && max!=arr[i]){
            smax = arr[i];
           
        }
    }
    if(smax == INT_MIN)
    return -1;
    
    return smax;
}