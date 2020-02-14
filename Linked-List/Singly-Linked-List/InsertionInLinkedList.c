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

int displayList(){
    q = head;
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

node *insertNodeAtEnd(){
    q = (node*)malloc(sizeof(node));
    printf("Enter Value Of New Node: ");
    scanf("%d", &q->data);
    q->next = NULL;


    return q;
}

int menu(){
    int operation;
    printf("######## Select The Next Operation ########\n1-> display\n2-> for Insertion From Head \n3-> for Quit \n4-> for Insertion From Tail\n: ");
    scanf(" %d", &operation);
    
    switch (operation)
    {
    case 1:
        displayList();

        printf("\n");
        menu();
        break;
    case 2:
        head = insertNodeAtBeginning();
        // p = head;
        // p->next = head->next;
        // printf("%d", p);
        printf("\n");
        menu();
        break;
    case 3:
        return 0;
        break;
    case 4:
        p->next = insertNodeAtEnd();
        p = p->next;
        p->next = NULL;

        printf("\n");
        menu();
        break;
    default:
        printf("Invalid Input");

        printf("\n");
        menu();
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