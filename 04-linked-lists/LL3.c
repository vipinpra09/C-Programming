#include <stdio.h>
#include <stdlib.h>
typedef struct student{
    int data1;
    struct student *next;
}s1;

s1 * createNode(int data){
    s1 * newnode = (s1 *)malloc(sizeof(s1));
    if(newnode == NULL){
        printf("Memory Allocation Failed");
        return NULL;
    }
    newnode->data1=data;
    newnode->next= NULL;
    return newnode;
}

s1 *creatList(int n){

if(n<= 0){
    return NULL;
}
s1 * start = NULL;
s1 * temp = NULL;
int data,i;
for(i = 1;i<= n;i++){
    printf("Enter data for Node: ");
    scanf("%d",&data);
    s1 * newnode = createNode(data);
    if(newnode == NULL){
        return start;
    }
    if(start == NULL){
        start = newnode;
    }
    else{
        temp->next = newnode;
    }
    temp = newnode;
}
return start;
}
void display(s1 * head){
    s1 * temp = head;
    while(temp != NULL){
        printf("%d ->",temp->data1);
        temp = temp->next;
    }
    printf("END");
}
int main(){
    int n = 0;
    s1 * head=creatList(5);
    display(head);
    return 0;
}
