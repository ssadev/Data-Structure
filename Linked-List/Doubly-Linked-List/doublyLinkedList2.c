#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node * prev;
    int data;
    struct node * next;
}node;

node *p, *q, *head = NULL, *tail;

void insertAtBeginning(int d){
    q = (node*)malloc(sizeof(node));
    q->data = d;
    if (head == NULL)
    {
        head = q;
        tail = head;
    }else
    {
        head->prev = q;
        q->next = head;
        head = q;
        q->prev = NULL;
    }
    
    
    
}
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
void insertAtNPosition(int d, int posi){
    q = (node*)malloc(sizeof(node));
    q->data = d;
    if(head == NULL){
        head = q;
        tail = head;
    }else
    {
        // printf("List Len: %d", listLen());
        if (posi > listLen())
        {
            printf("Index Out Of List Range");
        }else
        {
            p = head;
            int i = 0;
            while (i<posi)
            {
                p = p->next;
                i++;
            }
            // printf("\n =-----=> %d", p->data);

            q->next = p->next;
            p->next = q;
            q->prev = p;            
        }
        
    
    }
    
}
void insertAtEnd(int d){
    q = (node*)malloc(sizeof(node));
    q->data = d;
    if(head == NULL){
        head = q;
        tail = head;
    }else{
        q->prev = tail;
        tail->next = q;
        tail = q;
    }
    q->next = NULL;
}

void displayList(){
    p = head;
    while (p != NULL)
    {
        printf("%d-> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
    
}

int main(){
    int opr, d, posi;
    p = head;
    printf("Select Opertaion Insert At(1-> Beginning, 2-> 'n' position, 3-> End, 4-> Display, AnyKey-> Quit): ");
    scanf("%d", &opr);
    switch (opr)
    {
    case 1:
        printf("Enter New Element Data: ");
        scanf("%d", &d);
        insertAtBeginning(d);
        
        printf("\n");
        main();
        break;
    case 2:
        printf("Enter New Element Position: ");
        scanf("%d", &posi);
        printf("Enter New Element Data: ");
        scanf("%d", &d);
        posi = posi-1;
        insertAtNPosition(d, posi);
        
        printf("\n");
        main();
        break;
    case 3:
        printf("Enter New Element Data: ");
        scanf("%d", &d);
        // insertAtEnd(1);
        // insertAtEnd(1);
        insertAtEnd(d);
        
        printf("\n");
        main();
        break;
    case 4:
        displayList();

        printf("\n");
        main();
        break;
    
    default:
        printf("Invalid Input");
        return 0;
        break;
    }

    return 0;
}