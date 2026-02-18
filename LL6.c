#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node * next;
}node;
// a function to create new nodes..
node * createNode(int data1){
    node * newnode = (node *)malloc(sizeof(node));
    if(newnode == NULL){
        printf("Memory allocation Failed....");
        return NULL;
        
    }
    newnode->data= data1;
    newnode->next=NULL;
    return newnode;
}
// function to create list
node * createList(int n){
    if(n<= 0){
        return NULL;
    }
    
    node * start = NULL;
    node * temp = NULL;
    int data1;
    for(int i = 1; i<= n;i++){
        printf("Enter value at Node%d:",i);
        scanf("%d",&data1);
        node * newnode = createNode(data1);
        // if newnode is NULL it means memory allocation failed
        // check whether memory allocation failed
        if(newnode == NULL){
            return start;
        }
        // if start is NULL it means we are creating a new
        // check if list is empty
        if(start == NULL){
            start = newnode;
        }
        // run when list already created
        else{
            temp->next = newnode;
        }
        temp = newnode;
        
    }
    // start hold address of first node
    return start;
}
void display(node * head){
    node * temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("End\n");
}
void freeList(node * head){
    node * temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}
node * atstart(node * head,int data){
    // create a new node
    node * newnode = createNode(data);
    // check memory allocation
    if(newnode == NULL){
        return head;
    }
    // now newnode point to head and became new head
    newnode->next = head;
    // now head became new head
    head = newnode;
    return head;
    
}
node * atend(node * head,int data){
    node * newnode = createNode(data);
    node * temp = head;
    // check memory allocation
    if(newnode == NULL){
        return head;
    }
    // check nodes of list
    if(head == NULL){
        return newnode;
    }

    while(temp->next != NULL){
        temp = temp->next;
        
    }
    // temp point to new last added node
    temp->next =newnode;
    return head;
}
int main() {
  int n;
  printf("Enter Number of Nodes:");
  scanf("%d",&n);
  node * head = createList(n);
  display(head);
  int data;
  printf("Enter data to add at beggining:");
  scanf("%d",&data);
  printf("New linkedList:");
  head = atstart(head,data);
  printf("\n");
  display(head);
  //printf("\n");
    printf("Enter data to add at End:");
  scanf("%d",&data);

  head = atend(head,data);
  display(head);
freeList(head);
    return 0;
}
