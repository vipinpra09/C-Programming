#include <stdio.h>
#include <stdlib.h>
   struct node {
    int data;
    struct node * left;
    struct node * right;
   };
   struct node * createnode(int val){
    struct node * newnode;
     newnode = (struct node *)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    newnode -> data = val;
    newnode -> left = NULL;
    newnode -> right = NULL;
    return newnode;

   }

   struct node * insert(struct node * root , int val){
    if(root == NULL){
        return createnode(val);
    }
    
    if(val < root->data){
        root -> left = insert(root -> left , val);
    }
    else if(val > root -> data){
        root -> right = insert(root -> right , val);

    }
    else{
        printf("Duplicate element not allowed...");
    }
    return root;

   }
   void inorder(struct node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
   }

int main() {
    struct node * root = NULL;
    int value;
    printf("Enter values to insert in binary Search tree:");
    for(int i = 0 ; i < 7 ; i++){
        scanf("%d",&value);
        root = insert(root,value);

    }
    inorder(root);
    return 0;
}
