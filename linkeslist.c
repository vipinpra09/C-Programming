A linked list is a collection of nodes where each node contains data and a pointer to the next node.

C Program Example – Singly Linked List
#include <stdio.h>
#include <stdlib.h>

// Define a node
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

int main() {
    // Create nodes
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and links
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Print the linked list
    printList(head);

    return 0;
}


Output:

10 -> 20 -> 30 -> NULL

Diagram of the Linked List
+------+    +------+    +------+
| 10   | -> | 20   | -> | 30   | -> NULL
+------+    +------+    +------+


Each box is a node.

The arrow (->) is the pointer to the next node.

NULL shows the end of the list.

💡 Notes:

malloc is used to dynamically allocate memory for nodes.

head always points to the first node.

You can add more nodes dynamically by creating new nodes and linking them.
