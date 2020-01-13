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
    if(top == 1){
        statment = true;
    }else{
        statment = false;
    }

    return statment;
}

int count(){
    return top;
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
    return 0;
}

int display(){
    if(isEmpty()){
        cout << "Stack Is Empty. Nothing To Print";
    }else{
        cout << "[ ";
        for(int i = 0; i<=count(); i++){
            cout << stack[i] << ", ";
        }
        cout << "]";
    }
}


int main()
{
    int operation;
    cout << "\nselect operation type(1 -> push; 2 -> pop; 3 -> display; 4 -> quit): ";
    cin >> operation;
    switch(operation){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Invalid Input";
    }
    main();
    return 0;
}































/*

int stack[N];
int top = -1;

int push(){
	if(top == (N-1))
		cout << "Stack Is Full. Sorry! No Space To Push New Data";
	else{
		top += 1;
		int x;
        cout << "\nEnter Element Value: ";
		cin >> x;
		stack[top] = x;

	}
	return 0;
}

int pop(){
    if(top < 0){
        cout << "Stack Is Already Empty! Noting To Pop";
    }else{
        // cout << top;
        top -= 1;
    }
	return 0;
}

int display(){
	if(top == -1){
		cout << "Stack Is Empty";
	}else{
		for(int i = 0; i<=top; i++){
			cout << stack[i] << ", ";
		}
	}
	return 0;
}


int main()
{
    int operation;
    cout << "\nselect operation type(1 -> push; 2 -> pop; 3 -> display; 4 -> quit): ";
    cin >> operation;
    switch(operation){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Invalid Input";
    }
    main();
    return 0;
}


*/