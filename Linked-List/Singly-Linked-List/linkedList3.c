#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
typedef struct node node;

// int *createLinkedList(int val){
//     return 0;
// }

int main(){
    printf("Data Structure - Linked List\n");

    int n, item;
    node *p, *q, *head;
    printf("Number Of Nodes: ");
    scanf("%d", &n);

    printf("Enter The Value Of Head Node: ");
    scanf("%d", &item);

    q = (node*)malloc(sizeof(node));
    q->data = item;
    q->next = NULL;

    head = q;
    p = head;

    for(int i = 1; i<n; i++){
        
        printf("Enter The Value Of %d Node: ", i);
        scanf("%d", &item);

        q = (node*)malloc(sizeof(node));
        q->data = item;
        q->next = NULL;

        p->next = q; // Linking Node
        p = p->next; // jump to current node

    }

    p = head;
    while (p != NULL)
    {
        printf("%d, ", p->data);
        p = p->next;
    }

    


    printf("\n");
    return 0;
}