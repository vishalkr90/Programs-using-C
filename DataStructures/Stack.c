#include<stdio.h>
#define maxsize 5
int stack[maxsize];
int top = -1;
void push();
void pop();
void display();
int main(){
    
    int choice;
    while(1){
        printf("\n----STACK MENU-----");
        printf("\n1.Insert Element ");
        printf("\n2.Delete Element ");
        printf("\n3.Display Element ");
        printf("\n4.Exit ");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
    switch(choice){
        case 1 : push();
        break;
        case 2 : pop();
        break;
        case 3 : display();
        break;
        case 4 : return 0;
        default : printf("\nInvalid choice");
    }
    }
}
void push(){
    int data;
    if(top == maxsize-1){
        printf("\nOverflow");
        return;
    }
    else{
        top++;
        printf("\nEnter the element to insert : ");
        scanf("%d",&data);
        stack[top] = data;
    }
}
void pop(){
    if(top == -1){
        printf("\nUnderflow");
    }
    else{
        top--;
        printf("\nDeleted");
    }

}
void display(){
    if(top == -1){
        printf("\nStack is empty");
    }
    else{
    printf("\nStack is : ");
    for(int i = top ;i>=0;i--){
        printf("%d ",stack[i]);
    }
    }
}