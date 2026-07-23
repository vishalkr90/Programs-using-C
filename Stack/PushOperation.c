#include<stdio.h>
#define Maxsize 5
int top = -1;
int stack[Maxsize];
void push();
void pop();
void display();
void Top();

int main(){
    int choice;
    while(1){
        printf("\n---------STACK MENU-------");
        printf("\n1.Insert element : ");
        printf("\n2.Delete element : ");
        printf("\n3.Display elements of Stack : ");
        printf("\n4.Exit");
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
            break;
            case 5 : Top();
            break;
            default : printf("\nInvalid Choice");
        }
    }
    return 0;
}
void push(){
    if(top == Maxsize - 1){
        printf("\nSTACK OVERFLOW");
    }
    else{
        top++;
        int data;
        printf("\nEnter the element you want to insert : ");
        scanf("%d",&data);
        stack[top] = data;

    }
}
void pop(){
    if(top == -1){
        printf("\nSTACK UNDERFLOW");
    }
    else{
        printf("\nDeleted %d",stack[top]);
        top--;
        

    }

}
void display(){
    printf("\nThe elements of Stack are : ");
    for(int i = top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}

void Top(){
    if(top == -1){
        printf("Stack is empty");

    }
    else{
        printf("\n Top element is : %d",stack[top]);
    }
    }
