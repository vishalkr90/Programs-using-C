#include<stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);

int main(){
    int fact = factorial_using_loop(5);
    printf("\nfactorial using loop:%d",fact);
    int facts = factorial_using_recursion(6);
    printf("\nfactorial using recursion:%d",facts);
    return 0;
}
int factorial_using_recursion(int num){
    printf("\n.");
     if(num==0){
        return 1;
     }
     return num * factorial_using_recursion(num-1);
}



int factorial_using_loop(int num){
    printf("\n,");
    int result = 1;
    for(int i =2; i<= num; i++){
        result = result*i;
    }
    return result;
}