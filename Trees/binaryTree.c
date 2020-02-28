#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node * left;
    struct node * right;
}node;

node *root, *q;

node *createNewNode(int item){
    q = (node*)malloc(sizeof(node));
    q->data = item;
    q->left = q->right = NULL;
    return q;
}
node *Insert(node *ptn, int item){
    if(ptn == NULL){
        ptn = createNewNode(item);
    }else if (item <= ptn->data)
    {
        ptn->left = Insert(ptn->left, item);
    }else{
        ptn->right = Insert(ptn->right, item);
    }
    return ptn;
    
}

int search(node *ptn, int item){
    int status;
    if(ptn == NULL)
        status = 0;
    else if(item == ptn->data)
        status = 1;
    else if(item <= ptn->data)
        status = search(ptn->left, item);
    else
        status = search(ptn->right, item);
    return status;
}

int main(){
    root = NULL;
    root = Insert(root, 20);
    root = Insert(root, 12);
    root = Insert(root, 25);

    int searchData;
    printf("Search Data: ");
    scanf("%d", &searchData);
    if(search(root, searchData)){
        printf("Search Result Founded");
    }else{
        printf("Search Result: 0");
    }
    printf("\n");
    return 0;
}