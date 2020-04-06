#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head, *top;

void push(int item)
{
    node *q;
    q = (node *)malloc(sizeof(node));
    q->data = item;
    if (head == NULL)
    {
        head = q;
    }
    else
    {
        top->next = q;
    }
    top = q;
    q->next = NULL;
}

void pop()
{
    node *p;
    p = head;
    if (p == NULL)
    {
        printf("Stack Is Underflow\n");
    }
    else
    {
        int deleteData;
        if (top == head)
        {
            deleteData = head->data;
            free(head);
            head = NULL;
        }
        else
        {
            while (p->next != top)
            {
                p = p->next;
            }
            deleteData = p->next->data;
            free(p->next);
            p->next = NULL;
            top = p;
        }
        printf("Deleted Data: %d\n", deleteData);
    }
}

void display()
{
    node *p;
    p = head;
    if (p == NULL)
    {
        printf("Stack Is Underflow\n");
    }
    else
    {
        printf("Stack : ");
        while (p != NULL)
        {
            printf("%d -> ", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

int main(void)
{
    top = head = NULL;
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