#include <stdio.h>
#define N 10

int data, top = -1, stack[N];

void push(int data){
    if(top == (N-1)){
        printf("Stack Overflow");
    }else
    {
        top++;
        stack[top] = data;
        printf("Stack Pused : stack[%d] = %d", top, stack[top]);
    }
    
}

void pop(){
    if (top == -1)
    {
        printf("Stack Underflow");
    }else
    {
        stack[top] = 0;
        top--;
    }
}

void display(){
    if (top == -1)
    {
        printf("Stack Underflow");
    }else
    {
        for(int i=0; i<=top; i++){
            printf("%d, ", stack[i]);
        }
        printf("\n");
    }
}


int main(){
    int opr;
    printf("Select Opertaion Stack(1-> Push, 2-> Pop, 3-> Display): ");
    scanf("%d", &opr);

    switch (opr)
    {
    case 1:
        printf("Enter Data : ");
        scanf("%d", &data);
        push(data);
        printf("\n");
        main();
        break;
    case 2:
        pop();
        printf("\n");
        main();
        break;
    case 3:
        display();
        printf("\n");
        main();
        break;
    
    
    default:
        break;
    }
    return 0;
}