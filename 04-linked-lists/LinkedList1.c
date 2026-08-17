#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int data1;
    struct student *next;
} stud;

// Function to create a single node
stud* createNode(int data){
    stud *newnode = (stud*)malloc(sizeof(stud));
    if(newnode == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data1 = data;
    newnode->next = NULL;
    return newnode;
}

// Function to create the complete linked list
stud* createList(int n){
    if(n <= 0){
        return NULL;
    }

    stud *start = NULL, *temp = NULL;
    int data, i;

    for(i = 1; i <= n; i++){
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        stud *newnode = createNode(data);
        if(newnode == NULL){
            return start;
        }

        if(start == NULL){
            start = newnode;
        } else {
            temp->next = newnode;
        }

        temp = newnode;
    }

    return start;
}

// Function to display the list
void displayList(stud *head){
    stud *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data1);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    stud *head;
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = createList(n);

    printf("Linked List: ");
    displayList(head);

    return 0;
}
