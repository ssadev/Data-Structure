// Question : Write an algorithm to insert a node in Singly Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *p, *q, *head;
int displayList(){
    p = head;
    while (p!=NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL");
}
void insert(int d){
    node *temp;
    q = (node*)malloc(sizeof(node));
    q->data = d;
    if(head == NULL){
        head = q;
    }else{
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
        q->next = NULL;
    }
    
}

void reverseList(){
    node *prev, *nxt, *crnt;
    prev = 0;
    crnt = nxt = head;
    while (nxt != NULL)
    {
        nxt = nxt->next;
        crnt->next = prev;
        prev = crnt;
        crnt = nxt;
    }
    head = prev;
    

}


int main(){
    int n;
    head = NULL;
    p = head;
    insert(1);
    insert(1);
    insert(2);
    insert(3);
    insert(5);
    printf("Orginal Linked List: \n");
    displayList();
    printf("\nReverse Linked List: \n");
    reverseList();
    displayList();
    printf("\n");
    
    
    return 0;
}


