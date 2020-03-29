#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head, *tail, *q, *temp;

void createLinkdeList(int item);

void display()
{
    if (head == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        node *p;
        p = head;
        while (p != NULL)
        {
            printf("%d -> ", p->data);
            p = p->next;
        }
    }
}

void insertAtEnd(int item)
{
    if (head == NULL)
    {
        createLinkdeList(item);
    }
    else
    {
        q = (node *)malloc(sizeof(node));
        tail->next = q;
        tail = q;
        tail->data = item;
        tail->next = NULL;
    }
}

void insertAtBegin(int item)
{
    if (head == NULL)
    {
        createLinkdeList(item);
    }
    else
    {
        q = (node *)malloc(sizeof(node));
        q->next = head;
        head = q;
        q->data = item;
    }
}

void createLinkdeList(int item)
{
    q = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        head = q;
        tail = head;
        q->data = item;
        q->next = NULL;
    }
    else
    {
        insertAtEnd(item);
    }
}

void insertBefore(int val, int item)
{
    if (head == NULL)
    {
        createLinkdeList(item);
    }
    else
    {
        q = (node *)malloc(sizeof(node));
        q->data = item;
        temp = head;
        node *preptr;
        while (temp->data != val)
        {
            preptr = temp;
            temp = temp->next;
        }
        q->next = preptr->next;
        preptr->next = q;
    }
}

void insertAfter(int val, int item)
{

    if (head == NULL)
    {
        createLinkdeList(item);
    }
    else
    {
        q = (node *)malloc(sizeof(node));
        q->data = item;
        temp = head;
        while (temp->data != val)
        {
            temp = temp->next;
        }
        q->next = temp->next;
        temp->next = q;
    }
}

void deleteFromBegin()
{
    if (head == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void deleteFromEnd()
{
    if (head == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        temp = head;
        node *preptr;
        while (temp->next != NULL)
        {
            preptr = temp;
            temp = temp->next;
        }
        tail = preptr;
        tail->next = NULL;
        free(temp);
    }
}

void deleteFromVal(int val)
{

    if (head == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        if (head->data == val)
        {
            deleteFromBegin();
        }
        else
        {
            temp = head;
            node *preptr;
            while (temp->data != val)
            {
                preptr = temp;
                temp = temp->next;
            }
            preptr->next = temp->next;
            free(temp);
        }
    }
}

void deleteFromAfterVal(int val)
{

    if (head == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        if (head->data == val)
        {
            deleteFromBegin();
        }
        else
        {
            temp = head;
            node *preptr;
            preptr = temp;
            while (preptr->data != val)
            {
                preptr = temp;
                temp = temp->next;
            }
            preptr->next = temp->next;
            free(temp);
        }
    }
}

void deleteList()
{
    if (head == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        temp = head;
        node *tempDel;
        while (temp != NULL)
        {
            tempDel = temp;
            temp = temp->next;
            free(tempDel);
        }
        head = tail = NULL;
    }
}

void sortList()
{
    if (head == NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        node *ptr1, *ptr2;
        int tempData;
        ptr1 = head;
        while (ptr1->next != NULL)
        {
            ptr2 = ptr1->next;
            while (ptr2 != NULL)
            {
                if (ptr2->data <= ptr1->data)
                {
                    tempData = ptr1->data;
                    ptr1->data = ptr2->data;
                    ptr2->data = tempData;
                }

                ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next;
        }
    }
}

int main()
{
    int opr, item, val;
    head = tail = NULL;
    while (1)
    {
        printf("\n~~~~~~~~~~~~ MAIN MENU~~~~~~~~~~~");
        printf("\n1.Create a list");
        printf("\n2.Display the list");
        printf("\n3.Insertion of a node at begin");
        printf("\n4.Insertion of a node at end");
        printf("\n5.Insertion of a node before a given node");
        printf("\n6.Insertion of a node after a given node");
        printf("\n7.Deletion of a node at begin");
        printf("\n8.Deletion of a node at end");
        printf("\n9.Deletion of a given node");
        printf("\n10.Deletion of a node after a given node");
        printf("\n11.Deletion of the list");
        printf("\n12.Sorting of the linked list");
        printf("\n13.exit");
        printf("\nSelect Operation: ");
        scanf("%d", &opr);

        switch (opr)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &item);
            createLinkdeList(item);
            break;
        case 2:
            printf("Display List: \n");
            display();
            break;
        case 3:
            printf("Enter Data: ");
            scanf("%d", &item);
            insertAtBegin(item);
            break;
        case 4:
            printf("Enter Data: ");
            scanf("%d", &item);
            insertAtEnd(item);
            break;
        case 5:
            printf("Enter Data: ");
            scanf("%d", &item);
            printf("Enter the value before which the data has to b inserted: ");
            scanf("%d", &val);
            insertBefore(val, item);
            break;
        case 6:
            printf("Enter Data: ");
            scanf("%d", &item);
            printf("Enter the value before which the data has to b inserted: ");
            scanf("%d", &val);
            insertAfter(val, item);
            break;
        case 7:
            deleteFromBegin();
            break;
        case 8:
            deleteFromEnd();
            break;
        case 9:
            printf("\nEnter the value of the node which is to b deleted: ");
            scanf("%d", &val);
            deleteFromVal(val);
            break;
        case 10:
            printf("\nEnter the value after which the node is to b deleted: ");
            scanf("%d", &val);
            deleteFromAfterVal(val);
            break;
        case 11:
            deleteList();
            break;
        case 12:
            sortList();
            break;
        case 13:
            return 0;
        default:
            printf("Invalid Operation Selected");
            break;
        }
    }
    return 0;
}
