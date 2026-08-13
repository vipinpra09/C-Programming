#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;
};
struct node * createNode(int val){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    newnode -> prev = NULL;
    newnode -> data = val;
    newnode -> next = NULL;
    return newnode;

}

int main() {
    // Write C code here
    struct node * f = createNode(10);
    struct node * s = createNode(20);
    struct node * t = createNode(30);

    f-> prev = NULL;
    f-> next = s;
    s-> prev = f;
    s-> next = t;
    t-> prev = s;
    t-> prev = NULL;

    struct node * temp = f;
    while(temp != NULL){
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
    //printf("Start small. Ship something.");
    free(f);
    free(s);
    free(t);

    return 0;
}
