#include<stdio.h>
int sum(){
    return 0;
}
int main(){
    int size;
    printf("Enter Arrays Size : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<=size;i++){
        scanf("%d",&arr[i]);
    }

    return 0;
}