#include <iostream>
using namespace std;
#define N 5
// ccz47798@eveav.com
int queue[N];
int front = -1;
int rear = -1;

int menu(){
    int option;
    cout << "\n ***** Select Operation From Menu *****";
    cout << "\n 1. Insert an element";
    cout << "\n 2. Delete an element";
    cout << "\n 3. Peek";
    cout << "\n 4. Display the queue";
    cout << "\n 5. EXIT";
    cout << "\n Enter your option : ";
    cin >> option;

    return option;
}

int isFull(){
    double status;
    if(rear == (N-1)){
        status = true;
    }else
    {
        status = false;
    }

    return status;
}

int enqueue(int input){
    if(isFull()){
        cout << "Queue Is Overflow! No Space To Insert New Element";
        return 0;
    }else if(rear == -1 && front == -1){
        rear = front = 0;
    }
    else{
        rear += 1;
    }
    queue[rear] = input;
    return 0;
}

int isEmpty(){
    double status;
    if(front == -1 && rear == -1){
        status = true;
    }else
    {
        status = false;
    }

    return status;
}

int dequeue(){
    if(isEmpty()){
        cout << "Stack Is Underflow! Nothing To dequeue. " << front << ",  " << rear;
    }else{
        // queue[front] = 0;
        front += 1;
        if(front > rear)
            front = rear = -1;
    }
    return 0;
}

int peek(int index){
    if(isEmpty()){
        cout << "Stack Is Underflow! Nothing To Peek.";
    }else{
        cout << "Element Value: " << queue[index];
    }
    return 0;
}

int display(){
    if(rear == -1 && front == -1){
        cout << "Queue Is Underflow! Nothing To Display.";
    }else{
        for(int i = front; i <= rear; i++){
            cout << queue[i] << ", ";
        }
    }
    return 0;
}

int main(){
    switch(menu())
    {
        case 1:
            int n;
            cout << "Enter Value For New Element: ";
            cin >> n;
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            int index;
            cout << "Enter Element Index: ";
            cin >> index;
            peek(index);
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid Input";
    }
    main();
    return 0;
}
