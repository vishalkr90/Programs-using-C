#include<stdio.h>
int main(){
    int arr[]={1, 2, 1, 2 , 4, 4, 3, 3, 2, 2, 3, 4, 3, 4, 5, 5};
    int element;
    printf("\nEnter the number whose you want to see Occurence: ");
    scanf("%d",&element);
    int counter = 0;
    for(int i = 1;i<16;i++){
        if(element == arr[i]){
            counter = counter + 1;
        }
    }
    printf("\nThe Occurence of the number is: %d",counter);



    return 0;
}