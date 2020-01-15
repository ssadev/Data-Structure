#include <iostream>
using namespace std;
#define N 5
// ccz47798@eveav.com
int queue[N];
int front = -1 , rear = -1;

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

int isEmpty(){
    double status;
    if(front == -1 && rear == -1)
        status = true;
    else
    {
        status = false;
    }

    return status;
}

int isFull(){
    double status;
    if((rear+1)%N == front)
        status = true;
    else
        status = false;
    return status;
}

int frontRear(){
    cout << "Front : " << front << " , Raer : " << rear;
    return 0;
}

int enqueue(int input){
    if(isFull()){
        cout << "Queue Is Overflow!";
        return 0;
    }
    else if(isEmpty()){
        rear = front = 0;
    }
    else
    {
        rear = (rear+1)%N;
    }
    queue[rear] = input;
    frontRear();
    return 0;
}
int dequeue(){
    if(isEmpty()){
        cout << "Queue Is Underflow!";
    }else if(front == rear){
        front = rear = -1;
    }
    else
    {
        queue[front] = 0;
        front = (front+1)%N;
    }
    frontRear();
    return 0;
}

int peek(int index){
    return 0;
}

int display(){
    if(isEmpty()){
        cout << "Queue Is Underflow! Nothing To Display.";
    }else{
        for(int i = 0; i < N; i++){
            cout << queue[i] << ", ";
        }
    }
    frontRear();
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
