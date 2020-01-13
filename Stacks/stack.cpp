#include <iostream>
#define N 10 // size of stack
using namespace std;

/*
# Stack Operations :
    -> push
    -> pop
    -> display
    -> isEmpty
    -> isFull
    -> count
    -> peek
    -> change

*/
int top = -1;
int stack[N];

int isFull(){
    double statment;
    if(top == (N-1)){
        statment = true;
    }else{
        statment = false;
    }

    return statment;
}

int isEmpty(){
    double statment;
    if(top == -1){
        statment = true;
    }else{
        statment = false;
    }

    return statment;
}

int count(){
    return (top+1);
}

int push(){
    if(isFull())
        cout << "Stack Is Full. Sorry! No Space To Insert New Element";
    else{
        int element;
        top += 1;
        cout << "Enter a New Element Value: ";
        cin >> element;
        stack[top] = element;
    }
    return 0;
}

int pop(){
    if(isEmpty())
        cout << "Stack Is Empty! Nothing To pop";
    else{
        stack[top] = 0;
        top -= 1;
        cout << "LIFO Poping Successful!";
    }
}

int peek(int index){
    if(isEmpty()){
        cout << "Stack Is Empty!";
    }else if (index >= count() || index >= N)
    {
        cout << "Index Is Out Of Range or Element Is Empty";
    }else{
        cout << stack[index];
    }
}

int display(){
    if(isEmpty()){
        cout << "Stack Is Empty. Nothing To Print";
    }else{
        cout << "[ ";
        for(int i = 0; i<count(); i++){
            cout << stack[i] << ", ";
        }
        cout << "]";
    }
}


int main()
{
    int operation;
    cout << "\nselect operation type(1 -> push; 2 -> pop; 3 -> display; 4 -> peek; 5 -> quit): ";
    cin >> operation;
    switch(operation){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            cout << count() << "\n";
            display();
            break;
        case 4:
            int index;
            cout << "Enter The Index You want to peek: ";
            cin >> index;
            peek(index);
            break;
        case 5:
            return 0;
            break;
        default:
            cout << "Invalid Input";
    }
    main();
    return 0;
}

