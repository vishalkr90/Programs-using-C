#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 0;i<10; i++){
        printf("\nEnter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }

    int add = 0;
    for(int i = 0;i<10; i++){
        add = add + arr[i];
    }
    float avg = add/10;
    printf("\nThe sum of all elements is : %d",add);
    printf("\nThe average of all elements is : %.2f",avg);

    return 0;
}