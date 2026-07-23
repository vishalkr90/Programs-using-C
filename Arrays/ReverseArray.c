#include<stdio.h>
int main(){
    int arr[] = {44,55,66,77,88};
    int n = 5,temp,j=n-1,i=0;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }


    printf("The reverse Array is : ");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}