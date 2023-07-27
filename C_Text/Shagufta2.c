#include <stdio.h>
#include <stdlib.h>

// Define the linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to calculate the sum of alternative nodes and update the linked list
void sumAndPrintLinkedList(struct Node* head) {
    struct Node* current = head;
    int sum = 0;
    int flag = 1; // Flag to determine whether to include a node in the sum or not

    while (current != NULL) {
        if (flag) {
            sum += current->data;
        }
        flag = !flag;
        current = current->next;
    }

    // Print the sum of alternative nodes
    printf("Sum of alternative nodes: %d\n", sum);

    // Print the updated linked list
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert nodes into the linked list
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);

    // Call the function to calculate the sum and print the updated linked list
    sumAndPrintLinkedList(head);

    return 0;
}