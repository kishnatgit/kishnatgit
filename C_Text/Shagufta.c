#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *head2;

void initialize()
{
    head = NULL;
    head2 = NULL;
}

void insert(int num)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = head;
    struct node *newNode2 = (struct node *)malloc(sizeof(struct node));
    newNode2->data = num;
    newNode2->next = head;
    head = newNode;
    head2 = newNode2;
    // printf("Inserted Element : %d\n", num);
}
struct node *sumAlternateNodes(struct node *head, struct node *head2)
{

    if (head == NULL || head->next == NULL || head->next->next == NULL)
        return head;

    struct node *current = head;
    struct node *next_next = head2;
    // struct node *new_next_next = head;
    // printf("%d\n", &*current);
    printLinkedList(current);
    // printLinkedList(next_next);
    while (current != NULL || current->next->next != NULL)
    {
        int temp_data = current->next->next->data;
        current->next->next->data = temp_data + next_next->data;
        printf("%d\n", current->data);
        next_next = next_next->next;
        current = current->next;

        // next_next = current->next->next;
        // current->next->data = current->data;
        // current->next->next = next_next;
        // current = next_next;
    }
    // printf("%d",&current->next);
    // current->next = new_next_next;
    // head = current;
    // printLinkedList(new_next_next);
    // return head;
}

void printLinkedList(struct node *nodePtr)
{
    while (nodePtr != NULL)
    {
        printf("%d", nodePtr->data);
        nodePtr = nodePtr->next;
        if (nodePtr != NULL)
            printf("->");
    }
    if (nodePtr == NULL)
    {
        printf("\n");
    }
}

int main()
{
    initialize();
    insert(2);
    insert(1);
    insert(9);
    insert(2);
    insert(6);
    insert(8);
    insert(22);

    printf("\nLinked List\n");
    printLinkedList(head);
    printf("\n");
    printLinkedList(head2);
    printf("\n");
    printf("%d\n", &head);
    printf("%d\n", &head2);

    sumAlternateNodes(head, head2);
    printLinkedList(head);
    // head->next->next->data = head->next->next->data + head->data;
    // head2->next->data = head2->next->data + head2->data;
    // printLinkedList(head);
    // printLinkedList(head2);
    // printf("%d",head->next->next->next->data);

    return 0;
}