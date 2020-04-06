#include <stdio.h>
#define N 100

int a[N], top = -1;

void push(int item)
{
    if (top == (N - 1))
    {
        printf("Stack Is Overflow");
    }
    else
    {
        ++top;
        a[top] = item;
    }
    printf("\n");
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Is Underflow");
    }
    else
    {
        printf("Poping from Stack: %d", a[top]);
        a[top] = 0;
        --top;
    }
    printf("\n");
}

void display()
{

    if (top == -1)
    {
        printf("Stack Is Underflow");
    }
    else
    {
        printf("Stack: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d, ", a[i]);
        }
    }
    printf("\n");
}

int main()
{
    int opr, item;
    while (1)
    {
        printf("1-> Push\n2-> Pop\n3-> Display\n4-> Exit\nSelect Operation: ");
        scanf("%d", &opr);
        switch (opr)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &item);
            push(item);
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
            printf("Invalid Input\n");
        }
    }
    printf("\n");
    return 0;
}