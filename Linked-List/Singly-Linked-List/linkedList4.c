#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node *q, *head, *p;

node *createList(){
    q = (node*)malloc(sizeof(node));
    printf("Enter The Value Of Head Node: ");
    scanf("%d", &q->data);
    q->next = NULL;
    head = q;
    return head;
}

int displayList(){
    q = head;
    while (q!=NULL)
    {
        printf("%d -> ", q->data);
        q = q->next;
    }
    printf("NULL");
    printf("\n");
    
    return 0;
}

node *insertNodeAtBeginning(){
    q = (node*)malloc(sizeof(node));
    printf("Enter Value Of New Node: ");
    scanf("%d", &q->data);
    q->next = head;

    return q;
}

node *insertNodeAtEnd(){
    q = (node*)malloc(sizeof(node));
    printf("Enter Value Of New Node: ");
    scanf("%d", &q->data);
    q->next = NULL;


    return q;
}

int countLinkedList(){
	q = head;
	int count = 0;
	while(q!=NULL){
//		printf("%d\n", q->data);
		q = q->next;
		count++;
	}
	return count;
}

node *insertAtMiddle(int position){
	
	if(position < countLinkedList()){
		q = (node*)malloc(sizeof(node));
		printf("Enter Data For New Node At Middle: ");
		scanf("%d", &q->data);
		node *temp;
		temp = head;
		int i= 1;
		while(i<position){
			temp = temp->next;
			i++;
		}
		q->next = temp->next;
		temp->next = q;
		
		
	}else{
		printf("Position Is out Of The List Range");
	}
	
	
//	printf("middleOfNode: %d", middleOfNode);
	
	return 0;
}

int menu(){
    int operation, position;
    printf("######## Select The Next Operation ########\n1-> display\n2-> for Insertion From Head \n3-> for Quit \n4-> for Insertion From Tail\n5-> for Insertion At Middle\n: ");
    scanf(" %d", &operation);
    
    switch (operation)
    {
    case 1:
        displayList();

        printf("\n");
        menu();
        break;
    case 2:
        head = insertNodeAtBeginning();
        // p = head;
        // p->next = head->next;
        // printf("%d", p);
        printf("\n");
        menu();
        break;
    case 3:
        return 0;
        break;
    case 4:
        p->next = insertNodeAtEnd();
        p = p->next;
        p->next = NULL;

        printf("\n");
        menu();
        break;
    case 5:
    	printf("Enter The Position :");
    	scanf("%d", &position);
    	insertAtMiddle(position);
    	
        printf("\n");
        menu();
        break;
    default:
        printf("Invalid Input");

        printf("\n");
        menu();
        break;
    }
    return 0;
}

int main(){
    int n, val;
    // node *q, *head;
    // createList(val);

    head = NULL;
    head = createList();
    p = head;
    printf("Node Initialization Compleat.");
    menu();


    
    
    printf("\n");
    return 0;
}