#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter number for a :");
    scanf("%d",&a);
    printf("\nEnter number for b :");
    scanf("%d",&b);
    printf("\nEnter number for c :");
    scanf("%d",&c);

    if(a>b&&a>c){
        printf("A is greatest");
    }
    else if(b>a&&b>c){
        printf("B is greatest");
    }
    else if(c>a&&c>b){
        printf("C is greatest");
    }



    return 0;
}