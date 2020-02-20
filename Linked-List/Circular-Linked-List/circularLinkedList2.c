#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node * next;
}node;

node *head, *q, *p, *tail;
 
void insertAtEnd(int d){
	q = (node*)malloc(sizeof(node));
	q->data = d;
	if(head == NULL){
		head = q;
		tail = head;
	}else{
		tail->next = q;
		tail  = q;
		tail->next = head;
	}
	
}

void insertAtBeginning(int d){
	q = (node*)malloc(sizeof(node));
	q->data = d;
	if(head == NULL){
		head = q;
	}else{
		q->next = head;
		while(p->next != head){
			p = p->next;
		}
		printf("last elm: %d", p->data);	
	}
}
	

void display(){  
  node *current = head; 
   if(head == NULL){  
       printf("List is empty");  
    }  
    else{  
         do{  
                   
 printf("%d -> ", current->data);         
     current = current->next;  

        }while(current != head);  

        printf("NULL");  

    }  


}  


int main()
{
  head = NULL;
	int opr, d;
	/*
	insertAtEnd(5);
	insertAtEnd(15);
	insertAtEnd(25);
	insertAtEnd(35);
	insertAtEnd(45);
	insertAtEnd(55);
	*/
	insertAtBeginning(10);
	
	//menu();
	display();
	
	printf("\n");
	return 0;
}
 
