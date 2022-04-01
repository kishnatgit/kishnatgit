#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedList(struct Node *pointer)
{
    while (pointer != NULL)
    {
        printf("%d\n", pointer->data);
        pointer = pointer->next;
    }
}

void main()
{
    struct Node *First;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;
    struct Node *Five;
    First = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));
    Five = (struct Node *)malloc(sizeof(struct Node));
    First->data = 15;
    First->next = Second;
    Second->data = 25;
    Second->next = Third;
    Third->data = 35;
    Third->next = Fourth;
    Fourth->data = 45;
    Fourth->next = Five;
    Five->data = 90;
    Five->next = NULL;
    LinkedList(First);
}