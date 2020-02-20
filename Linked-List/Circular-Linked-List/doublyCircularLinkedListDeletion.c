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
    printf("NULL");
    
}

void makeALinkedList(int num){
  int i;
  for(i=1; i<=num; i++){
    insertAtEnd(i);
  }
}



void deleteFromBeginning(){
    node * temp;
    if(head == NULL){
        printf("\nList Is Empty");
    }else
    {
        temp = head;
        head = head->next;
        tail->next = head;
        head->prev = tail;
        free(temp);
    }
    
}


void deleteFromNPosition(int posi){
    node * temp;
    if(head == NULL){
        printf("\nList Is Empty");
    }else
    {
        // printf("=======> %d", countList());
        if (countList() <= 1)
        {
            printf("List Range Out Of Position. Use Manual Delete Function\n");
        }else
        {
            --posi;
            p = head;

            for(int i=0; i<posi; i++){
                p = p->next;
            }
            temp = p;
            p->prev->next = p->next;
            p->next->prev = p->prev;
            free(temp);
        }
        
        
    // --posi;
    // p = head;

    // for(int i=0; i<posi; i++){
    //     p = p->next;
    // }
    // temp = p;
    // p->prev->next = p->next;
    // p->next->prev = p->prev;
    // free(temp);
    // printf("======> %d", p->data);
    }
}

void deleteFromEnd(){
    node *temp;
    if(tail == NULL){
        printf("\nList Is Empty");
    }else
    {
        temp = tail;
        tail = tail->prev;
        tail->next = head;
        free(temp);
        // printf("\n List Len: %d", countList());
    }

}





int main(){
    head = NULL;
    tail = head;
    makeALinkedList(4);
    displayList();
    printf("\n");

    deleteFromEnd();
    // deleteFromEnd();
    displayList();
    printf("\n");

    deleteFromBeginning();
    displayList();
    printf("\n");

    deleteFromNPosition(2);
    displayList();
    printf("\n");

    deleteFromNPosition(1);
    displayList();
    printf("\n");


    printf("\n");
    return 0;
}