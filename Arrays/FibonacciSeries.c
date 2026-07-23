#include<stdio.h>
int main(){
    int arr[90];
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2;i<n;i++){
        arr[i] = arr[i-1] + arr[i-2];

    }
    printf("%d",arr[n-1]);

}