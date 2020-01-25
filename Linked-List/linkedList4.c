#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

typedef struct node node;

// int createNode(int val){
//     return 0;
// }

int displayList(node *p){
    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL");
    return 0;
}

int main(){
    printf("Data Structure - Linked List\n");

    int n, item;
    node *head, *q, *p;

    printf("Numbers Of Node: ");
    scanf("%d", &n);

    head = NULL;
    for(int i=0; i<n; i++){
        q = (node*)malloc(sizeof(node));
        printf("Enter The Value Of Node: ");
        scanf("%d", &item);
        
        q->data = item;
        q->next = NULL;
        if(head == NULL){
            head = q;
            p = head;
        }else{
            p->next = q;
            p = p->next;
        }
    }
    
    p = head;
    displayList(p);

    

    printf("\n");
    return 0;
}