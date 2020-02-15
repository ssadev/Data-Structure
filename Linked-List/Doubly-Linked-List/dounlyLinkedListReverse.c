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
void displayList(){
    // TRUE for right -> left travers || FALSE for left -> right Travers
    // if(direct == TRUE){
        p = head;
        while (p != NULL)
        {
            // printf("(%d) %d (%d)-> ", p->prev, p->data, p->next);
            printf("%d -> ", p->data);
            p = p->next;
        }
        printf("NULL");
    // }else{
    //     p = tail;
    //     while (p != NULL)
    //     {
    //         printf("%d -> ", p->data);
    //         p = p->prev;
    //     }

    //     printf("NULL");
    // }
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

void reverseList(){
    node *crnt, *temp;
    crnt = head;
    while (crnt != NULL)
    {
        temp = crnt->prev;
        crnt->prev = crnt->next;
        crnt->next = temp;
        crnt = crnt->prev;
    }
    temp = temp->prev;
    head = temp;
    

}

int main(){
    int n = 6;
    head = NULL;

    printf("Normal List: \n");
    insertNode(1);
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(5);
    displayList();
    printf("\n");
    printf("Reversed List: \n");
    reverseList();
    displayList();
    printf("\n");
    return 0;
}