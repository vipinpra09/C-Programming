// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int data1;
    struct student *next;
} stud;

stud *creatlist(int n){
    stud *start = NULL, *temp, *newnode;
    int i;

    if(n <= 0){
        return NULL;
    }

    // Create first node
    start = (stud *)malloc(sizeof(stud));
    if(start == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }

    printf("Enter data for node 1: ");
    scanf("%d", &start->data1);
    start->next = NULL;

    temp = start;

    // Create remaining nodes
    for(i = 2; i <= n; i++){
        newnode = (stud *)malloc(sizeof(stud));
        if(newnode == NULL){
            printf("Memory allocation failed\n");
            return start;
        }

        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data1);
        newnode->next = NULL;

        temp->next = newnode;
        temp = newnode;
    }

    return start;
}

int main() {
    stud *head;
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = creatlist(n);
    return 0;
}
