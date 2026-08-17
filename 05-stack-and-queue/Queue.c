#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int val){
    if(rear == MAX -1){
        printf("Queue Overflow...");
        exit(1);
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear] = val;
    printf("%d enqueued in queue..\n",val);

}

void dequeue(){
    if(front == -1){
        printf("Queue UnderFlow...\n");
        exit(1);
    }
    int temp = queue[front];
    front++;
    printf("%d dequeued from the Queue\n",temp);
    if(front > rear){
        front = -1;
        rear = -1;
    }
}

void display(){
    printf("Queue:");
    int temp = front;
    while( temp != rear + 1){
        printf("[%d] ",queue[temp]);
        temp++;
    }
    printf("\n");
}
int main() {
    // Write C code here
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}
