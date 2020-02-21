#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node * left;
    struct node * right;
}node;

node *root, *q;

void getNewNode(int item){
    q = (node*)malloc(sizeof(node));
    q->data = item;
    q->left = q->right = NULL;
    root = q;
}
void Insert(node *posi, int item){
    q = (node*)malloc(sizeof(node));
    q->data = item;
    if(root == NULL){
        root = q;
        q->left = q->right = NULL;
    }else if (item <= root->data)
    {
        root->left = Insert(root->left, item);
    }
    
}

int main(){
    root = NULL;
    Insert(root, 20);


    printf("\n");
    return 0;
}