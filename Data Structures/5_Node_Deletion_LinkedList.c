// Deletion at the beginning
// Deletion at the end
// Deletion somewhere in between
// Deletion after a node

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedList_display(struct Node *First)
{
    while (First != NULL)
    {
        printf("%d\n", First->data);
        First = First->next;
    }
}

void Deletion_at_Beginning(struct Node *First)
{
    struct Node *pointer = First;
    pointer = First->next;
    free(First);
    LinkedList_display(pointer);
}

void Deletion_at_End(struct Node *First)
{
    struct Node *pointer1 = First;
    struct Node *pointer2 = First->next;
    while (pointer2->next != NULL)
    {
        pointer1 = pointer1->next;
        pointer2 = pointer2->next;
    }
    pointer1->next = NULL;
    free(pointer2);
    LinkedList_display(First);
}

void Deletion_somewhere_in_Between(struct Node *First, int i)
{
    struct Node *pointer = First;
    struct Node *pointer2 = First->next;
    for (int x = 0; x < i - 1; x++)
    {
        pointer = pointer->next;
        pointer2 = pointer2->next;
    }
    pointer->next = pointer2->next;
    free(pointer2);
    LinkedList_display(First);
}

void Deletion_after_Node(struct Node *First, struct Node *Delete_Node)
{
    struct Node *pointer = First;
    while (pointer->next != Delete_Node)
    {
        pointer = pointer->next;
    }
    pointer->next = Delete_Node->next;
    free(Delete_Node);
    LinkedList_display(First);
}

void Deletion_of_Node_WRT_Value(struct Node *First, int value)
{
    struct Node *pointer1 = First;
    struct Node *pointer2 = First->next;
    while (pointer2->data != value)
    {
        pointer1 = pointer1->next;
        pointer2 = pointer2->next;
    }
    pointer1->next = pointer2->next;
    free(pointer2);
    LinkedList_display(First);
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
    Five->data = 95;
    Five->next = NULL;
    LinkedList_display(First);
    char c;
    printf("\n\nwhere to Delete? b for At Beginning : e for At End : s for Somewhere in Between : a for After a Node : v for Node with a given Value.\n");
    scanf("%c", &c);
    // getc(stdin);
    // fgetc(stdin);
    switch (c)
    {
    case 'b':

        Deletion_at_Beginning(First);
        break;

    case 'e':

        Deletion_at_End(First);
        break;

    case 's':

        Deletion_somewhere_in_Between(First, 3);
        break;

    case 'a':

        Deletion_after_Node(First, Third);
        break;

    case 'v':
        Deletion_of_Node_WRT_Value(First, 45);
        break;
    }
}
