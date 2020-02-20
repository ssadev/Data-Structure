#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node * next;
}node;

node *head, *tail, *p, *q;

void display(){
  if(head == NULL){
    printf("List Is Empty");
  }else{
    p = head;
    do{
      printf("%d -> ", p->data);
      p = p->next;
    }while(p != head);
    printf("NULL"); 
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
void insertAtBeginning(int item){
	q = (node*)malloc(sizeof(node));
	q->data = item;
	
  if(head == NULL){
		head = q;
    tail = head;
	}else{
    // tail->next = q;
    q->next = head;
    head = q;
  }
  tail->next = q;

}

void insertAtNPosition(int posi, int item){
  if(posi > countList()){
    printf("List Range Out of Position\n");
  }else{
    --posi;
    node * temp;
    q = (node*)malloc(sizeof(node));
    q->data = item;
    if(head == NULL){
      head = q;
      tail = head;
      q->next = head;
    }else{
      p = head;
      int i;
      for(i = 1; i<posi; i++){
        p = p->next;
      }
      temp = p->next;
      p->next = q;
      q->next = temp;

      // printf("\n Posi Data: %d", p->data);
    }
  }

}

void insertAtEnd(int item){
	q = (node*)malloc(sizeof(node));
	q->data = item;
	if(head == NULL){
		head = q;
	}else{
    tail->next = q;
    q->next = head;
  }
  tail = q;
}

void makeALinkedList(int num){
  int i;
  for(i=1; i<=num; i++){
    insertAtEnd(i);
  }
}

void deleteFromBeginning(){
  node * temp;
  temp = head->next;
  tail->next = head->next;
  free(head);
  head = temp;
}

void deleteFromNPosition(int posi){
  if(posi >= countList()){
    printf("List Range Out Of Position\n");
  }else{
    p = head;
    int i;
    --posi;
    for(i = 1; i<posi; i++){
      p = p->next;
    }
    // printf("==========> %d", p->data);
    node * temp = p->next;
    free(p->next);
    p->next = temp->next;
  }

}

void deleteFromEnd(){
  if(head->data == 0){
    printf("List Is Already Empty");
  }else
  {
    p = head;
    int i;
    int lastNodeIndex = countList();
    --lastNodeIndex;
    for(i = 1; i<lastNodeIndex; i++){
      p = p->next;
    }
    // node *temp = p;
    p->next = tail->next;
    free(tail);
    tail = p;

  }
 
}



int main(){
	head = NULL;
	tail = head;

  // Creating a linked list of length 5
  makeALinkedList(7);
  display();
  printf("\n");
  // linked list created

  // deleteFromBeginning();
  deleteFromBeginning();
  display();
  printf("\n");

  deleteFromEnd();
  // deleteFromEnd();
  display();
  printf("\n");

    // deleteFromBeginning();
  deleteFromNPosition(2);
  display();
  printf("\n");

  printf("\n");
	return 0;
}
