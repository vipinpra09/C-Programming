#include <stdio.h>
#define MAX 5
int queue[MAX];

int front = -1;
int rear = -1;

void enqueue(int data){
    if(rear == MAX -1){
        printf("Queue OverFlow.\n");
        return;
    }
    if(front = -1){
        front = 0;
    }
    rear = rear + 1;
    queue[rear] = data;
    printf("%d enqueued in Queue.\n",data);
}
void dequeue(){
    if(front == -1){
        printf("Queue UnderFlow.\n");
        return;
    }
    int temp = queue[front];
    front = front + 1;
    printf("%d dequeued from queue.\n",temp);

    if(front > rear){
        front = -1;
        rear = -1;
    }

}

void display(){
    int temp = front;
    if(temp == -1){
        printf("Queue is Empty.\n");
        return;
    }
    printf("Queue:");
    while(temp != rear + 1){
        printf("[%d] ",queue[temp]);
        temp++;
    }
    printf("\n");
}
int main() {
     enqueue(10);
     enqueue(20);
     enqueue(30);
     enqueue(40);
     enqueue(50);
     display();
     dequeue();
     dequeue();
     dequeue();
     display();
     //enqueue(60);
    return 0;
}
