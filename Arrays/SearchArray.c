#include<stdio.h>
int main(){
    int n;
    int arr[] = {34,55,33,76,87};
    printf("Enter number to search : ");
    scanf("%d",&n);
    int num ;
    for(int i =0;i<5;i++){
        if(n==arr[i]){
            num = i;
        }
    }
    printf("The index number of Number is : %d",num);
    return 0;
}