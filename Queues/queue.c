#include <stdio.h>
#include <stdlib.h>
#define N 10


int Queue[N];
int front, rear;

int enqueue(int n){
    if(rear == (N-1)){
        printf("Queue Is Overflow! No Space To Insert New Element");
        return 0;
    }else if(front == -1 && rear == -1){
        front = rear = 0;
    }else
    {
        ++rear;
    }
    Queue[rear] = n;
    return 0;
}

void dequeue(){
    if(rear == -1 && front == -1){
        printf("Queue Is Underflow");
    }else if(front == rear){
        rear = front = -1;
    }else{
        Queue[front] = 0;
        ++front;
    }
}

int display(){
    if(rear == -1 && front == -1){
        printf("Queue Is Underflow! Nothing To Display.");
    }else{
        for(int i = front; i <= rear; i++){
            printf("%d, ", Queue[i]);
        }
    }
    return 0;
}

void peek(int index){
    if(rear == -1 && front == -1){
        printf("Queue Is Underflow! Nothing To Display.");
    }else{
        printf("Element of Index (%d): %d", index, Queue[index-1]);
    }
}

int menu(){
    int n, index;
    int option;
    printf("\n ***** Select Operation From Menu *****");
    printf("\n 1. Insert an element");
    printf("\n 2. Delete an element");
    printf("\n 3. Peek");
    printf("\n 4. Display the queue");
    printf("\n 5. EXIT");
    printf("\n Enter your option : ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            printf("Enter Value For New Element: ");
            scanf("%d", &n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            // int index;
            printf("Enter Element Index: ");
            scanf("%d", &index);
            peek(index);
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid Input");
    }
    menu();
    return 0;
}

int main(){
    front = rear = -1;
    
    menu();

    return 0;
}