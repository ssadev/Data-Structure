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
        q->prev = head;
        q->next = head;
    }else
    {
        head->prev = q;
        q->next = head;
        head = q;
        q->prev = tail;
        tail->next = head;
    }

}

int countList(){
  p = head;
  int len = 0;
  do{
		// printf("%d -> ", p->data);
		p = p->next;
    len++;
	}while(p != head);
  return len;
}

void insertAtNPosition(int posi, int d){
    q = (node*)malloc(sizeof(node));
    q->data = d;
    if(head == NULL){
        head = q;
        tail = head;
        q->prev = head;
    }else
    {
        // printf("List Len: %d", countList());
        if (posi > countList())
        {
            printf("Index Out Of List Range");
        }else
        {
            p = head;
            int i = 1;
            --posi;
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
        q->prev = head;
    }else{
        q->prev = tail;
        tail->next = q;
        tail = q;
    }
    q->next = head;
}

void displayList(){
    p = head;
    do{
        printf("%d -> ", p->data);
        p = p->next;
    }
    while (p != head);
    printf("NULL\n");
    
}

int main(){
    int opr, d, posi;
    head = NULL;
    tail = head;
    // insertAtEnd(1);
    insertAtEnd(3);
    // insertAtEnd(5);
    displayList();
    printf("\n");

    insertAtBeginning(2);
    insertAtBeginning(1);
    insertAtBeginning(1);
    displayList();
    printf("\n");

    insertAtNPosition(2, 22);
    displayList();
    printf("\n");

    insertAtNPosition(2, 33);
    displayList();
    printf("\n");

    printf("\n");
    return 0;
}