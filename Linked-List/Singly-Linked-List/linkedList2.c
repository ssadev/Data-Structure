#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
typedef struct node node;

node *createLinkedList(int n){
    int i = 0;
    node * head = NULL;
    node * temp = NULL;
    node *p = NULL;

    for(i = 0; i<n; i++){
        temp = (node*)malloc(sizeof(node));
        printf("Enter The Data: ");
        scanf("%d", &(temp->data));
        temp->next = NULL;

        if(head == NULL){
            head = temp;
        }else
        {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
                p->next = temp;
            }
        }
        
    }
    return head;
}

int displayList(node * head){
    node * temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    
}

int main(){
    int n;

    node *head = NULL;
    printf("How Many Nodes: ");
    scanf("%d", &n);
    // printf("\nYou Want To Create %d nodes\n", n);
    head = createLinkedList(n);
    displayList(head);

    printf("\n");
    return 0;
}