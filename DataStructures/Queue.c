#include<stdio.h>
#define maxsize 5
int rear = -1;
int front = -1;
int data,choice;
int queue[maxsize];
void enequeue();
void dequeue();
void display();

int main(){
    int choice;
    while(1){
        printf("\n-------QUEUE MENU--------");
        printf("\n1.Eneque");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
        case 1 : enequeue();
        break;
        case 2 : dequeue();
        break;
        case 3 : display();
        break;
        case 4 : return 0;
        default : printf("\nInvalid Choice");
    }
    }
    

    return 0;
}
void enequeue(){
    if(rear == maxsize - 1){
        printf("\nQueue Overflow");
    }
    else{
        if(front == -1){
            front = 0;
        }
        printf("\nEnter the number to Insert : ");
        scanf("%d",&data);
        rear++;
        queue[rear] = data;

    }
}
void dequeue(){
    if(front == -1 || front>rear){
        printf("\nQueue Underflow");
    }
    else{
    printf("\nElement deleted %d",queue[front]);
    front++;
    if(front>rear){
        front = rear = -1;
    }
}
}
void display(){
    if(front == -1){
    printf("\nQueue is Empty");
    return;
}
    printf("The elements of Queue are : ");
    for(int i = front;i<=rear;i++ ){
        printf("%d ",queue[i]);
    }
}