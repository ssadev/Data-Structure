#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node * left;
    struct node * right;
}node;

node *q;

node *getNewNode(int item){
    q = (node*)malloc(sizeof(node));
    q->data = item;
    q->left = q->right = NULL;
    return q;
}
node *Insert(node *root, int item){
    if(root == NULL){
        return getNewNode(item);
    }else if (item <= root->data)
    {
        root->left = Insert(root->left, item);
    }else
    {
        root->right = Insert(root->right, item);
    }
    return root;
    
}

double search(node *root, int item){
    double res;
    if(root == NULL) res = 0;
    else if(root->data == item) res = 1;
    else if(item <= root->data) res = search(root->left, item);
    else res = search(root->right, item);
    return res;
}

int main(){
    node *root;
    int item;
    root = NULL;
    root = Insert(root, 20);
    // printf("\nRoot => Location: %d, Value: %d ", &root, root->data);
    root = Insert(root, 15);
    root = Insert(root, 25);
    // printf("\nRoot => Location: %d, Value: %d ", &root, root->data);
    while (1)
    {
        printf("Search Item: ");
        scanf("%d", &item);
        if (search(root, item) == 1)
        {
            printf("Item Is Available ✅");
        }else
        {
            printf("Item Is Not Available ❎");
        }
        printf("\n");
    }
    
    

    printf("\n");
    return 0;
}