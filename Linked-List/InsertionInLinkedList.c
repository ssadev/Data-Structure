#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node *q, *head, *p;

node *createList(){
    q = (node*)malloc(sizeof(node));
    printf("Enter The Value Of Head Node: ");
    scanf("%d", &q->data);
    q->next = NULL;
    head = q;
    return head;
}

int displayList(node *q){
    while (q!=NULL)
    {
        printf("%d -> ", q->data);
        q = q->next;
    }
    printf("NULL");
    printf("\n");
    
    return 0;
}

node *insertNodeAtBeginning(){
    q = (node*)malloc(sizeof(node));
    printf("Enter Value Of New Node: ");
    scanf("%d", &q->data);
    q->next = head;

    return q;
}

int menu(){
    char operation;
    printf("Select The Next Operation(d->display, i-> for Insertion q-> for Quit): ");
    scanf(" %c", &operation);
    
    switch (operation)
    {
    case 'd':
        displayList(p);
        menu();
        break;
    case 'i':
        head = insertNodeAtBeginning();
        p = head;
        p->next = head->next;
        // printf("%d", p);
        menu();
        break;
    case 'q':
        return 0;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}

int main(){
    int n, val;
    // node *q, *head;
    // createList(val);

    head = NULL;
    head = createList();
    p = head;
    printf("Node Initialization Compleat.");
    menu();
    
    
    printf("\n");
    return 0;
}