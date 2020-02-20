#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node * next;
}node;

node *head, *tail, *p, *q;
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

void display(){
	p = head;
	do{
		printf("%d -> ", p->data);
		p = p->next;
	}while(p != head);
	printf("NULL");
}

int main(){
	head = NULL;
	tail = head;
	insertAtEnd(1);
	insertAtEnd(2);
	insertAtEnd(3);
  // insertAtBeginning(1);
  insertAtBeginning(0);
  display();
	printf("\n");
  insertAtNPosition(3, 33);
  display();
	printf("\n");
  insertAtNPosition(13, 33);
  display();
	printf("\n");
  // printf("List Length: %d", countList());
	return 0;
}
