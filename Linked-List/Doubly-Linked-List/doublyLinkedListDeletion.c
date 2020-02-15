#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef struct node{
    struct node * prev;
    int data;
    struct node * next;
}node;

node *p, *q, *head, *tail;

int listLen(){
    int len = 0;
    p = head;
    while (p != NULL)
    {
        p = p->next;
        len++;
    }
    
    return len;
}

void displayList(double direct){
    // TRUE for right -> left travers || FALSE for left -> right Travers
    if(direct == TRUE){
        p = head;
        while (p != NULL)
        {
            // printf("(%d) %d (%d)-> ", p->prev, p->data, p->next);
            printf("%d -> ", p->data);
            p = p->next;
        }
        printf("NULL");
    }else{
        p = tail;
        while (p != NULL)
        {
            printf("%d -> ", p->data);
            p = p->prev;
        }

        printf("NULL");
    }
}
void insertNode(int d){
    q = (node*)malloc(sizeof(node));
    q->data = d;
    if(head == NULL){
        head = q;
        tail = head;
    }else{
        tail->next = q;
        q->prev = tail;
        tail = q;
        
    }
}

void deleteFromBeginning(){
    node * temp;
    if(head == NULL){
        printf("\nList Is Empty");
    }else
    {
        temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = 0;
        }
        free(temp);
    }
    
}

void deleteFromNPosition(int posi){
    node * temp;
    if(head == NULL){
        printf("\nList Is Empty");
    }else
    {
    --posi;
    p = head;

    for(int i=0; i<posi; i++){
        p = p->next;
    }
    temp = p;
    p->prev->next = p->next;
    p->next->prev = p->prev;
    free(temp);
    // printf("======> %d", p->data);
    }
}

void deleteFromEnd(){
    node * temp;
    if(tail == NULL){
        printf("\nList Is Empty");
    }else
    {
        temp = tail;
        tail = tail->prev;
        // printf("\n List Len: %d", listLen());
        if(listLen() != 1){
            tail->next = 0;
        }
        free(temp);
        printf("\n List Len: %d", listLen());
    }

}

int menu(){
    int opr, posi;
    printf("\nSelect Opertaion Delete From(1-> Beginning, 2-> 'n' position, 3-> End, 4-> Display, AnyKey-> Quit): ");
    scanf("%d", &opr);
    switch (opr)
        {
        case 1:
            deleteFromBeginning();

            printf("\n");
            menu();
            break;
        case 2:
            printf("\nEnter Position: ");
            scanf("%d", &posi);
            deleteFromNPosition(posi);

            printf("\n");
            menu();
            break;
        case 3:
            deleteFromEnd();

            printf("\n");
            menu();
            break;
        case 4:
            displayList(TRUE);

            printf("\n");
            menu();
            break;
        
        default:
            printf("Invalid Input");
            return 0;
            break;
        }
}

int main(){
    head = NULL;
    // Creating Linked List
    insertNode(1);
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(5);
    menu();
    

    printf("\n");
    return 0;
}