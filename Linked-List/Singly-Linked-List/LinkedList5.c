#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node *head, *nnode, *p, *last;
int data;

node *append(int data){
    // node *last;
    nnode = (node*)malloc(sizeof(node));
    last = head;
    nnode->data = data;
    nnode->next = NULL;

    if (head == NULL)
    {
        head = nnode;
    }else{
        while (last->next!=NULL)
        {
            last = last->next;
        }
        last->next = nnode;

    }
    
    return nnode;

}

int displayList(){
    p = head;
    while (p!=NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL");
}

int main(){
    head = NULL;
    p = head;
    append(12);
    append(13);
    append(14);
    append(15);
    append(16);
    displayList();

    printf("\n");
    return 0;
}