#include <stdio.h>


struct node
{
    int value;
    struct node* next;
};

typedef struct node node_t;

int printList(node_t *head){
    node_t *temp = head;
    // printf("TestCase: %d", head);
    while (temp != NULL)
    {
        printf("%d", temp->value);
        temp = temp->next;
        printf(" , ");
    }
    printf("\n");

    return 0;
}

int createNode(int value){
    
}
int main(){
    int n;
    scanf("%d", &n);

    node_t n1, n2, n3;
    node_t *head;

    n1.value = 20;
    n2.value = 40;
    n3.value = 60;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;
    
    // add a new node n4
    node_t n4;
    n4.value = 80;
    n3.next = &n4;
    n4.next = NULL;
    printList(head);

    // remove first head node
    head = head->next;
    printList(head);

    return 0;
}