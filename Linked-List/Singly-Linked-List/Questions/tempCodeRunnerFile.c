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
int main(){
    int n;
    head = NULL;
    p = head;
    printf("Enter The Value For Node: ");
    scanf("%d", &n);
    insert(n);
    displayList();
    printf("\nEnter The Value For Node: ");
    scanf("%d", &n);
    insert(n);
    displayList();
    printf("\n");
    
    
    return 0;
}


