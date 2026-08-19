#include <stdio.h>
#define MAX  5
int stack[MAX];
int top = -1;

void push(){
    int val;
    if(top == MAX-1){
        printf("Stack OverFlow");
        return;
    }
    printf("Enter a element to push in stack:");
    scanf("%d",&val);
    top++;
    stack[top] = val;
    printf("\n");
}
void pop(){
    if(top == -1){
        printf("Stack UnderFlow");
        return;
    }
    int temp = stack[top];
    top--;
    printf("%d popped from stack..\n",temp);
}
void peek(){
    printf("Element at peek : %d", stack[top]);
    printf("\n");
}
int main() {
    // Write C code here
   // printf("Start small. Ship something.");
      push();
      push();
      peek();
      pop();
      pop();
      pop();

    return 0;
}
