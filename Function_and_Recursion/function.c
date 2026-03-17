#include<stdio.h>

void count_to_100();
int sum(int , int);

int main(){
    count_to_100();
    int add = sum(5,3);
    printf("\nThe sum is: %d",add);

    int x = 3;
    int y = 4;
    int z = sum(x,y);
    printf("\nThe sum is: %d",z);
    return 0;
}

void count_to_100() {
    for(int i = 1; i<=10; i++){
        printf("\n%d ",i);
    }
    }

int sum(int a,int b){
    int addition = a+b;
    return addition;
}    
