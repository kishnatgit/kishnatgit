// Insert at the Beginning
// Insert at the end
// Insert somewhere in between
// Insert after a node

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedList_display(struct Node *pointer)
{
    while (pointer != NULL)
    {
        printf("%d\n", pointer->data);
        pointer = pointer->next;
    }
}

void Insertion_at_beginning(struct Node *First)
{
    struct Node *New_Head = (struct Node *)malloc(sizeof(struct Node));
    New_Head->data = 555;
    New_Head->next = First;
    LinkedList_display(New_Head);
}

void Insertion_at_End(struct Node *First)
{
    struct Node *End = (struct Node *)malloc(sizeof(struct Node));
    End->data = 105;
    struct Node *pointer = First;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    End->next = NULL;
    pointer->next = End;
    LinkedList_display(First);
}

void Insertion_Somewhere_in_Between(struct Node *First, int Node_Index)
{
    struct Node *new_Node = (struct Node *)malloc(sizeof(struct Node));
    new_Node->data = 75;
    int i = 0;
    struct Node *pointer = First;
    while (i != Node_Index - 1)
    {
        pointer = pointer->next;
        i++;
    }
    new_Node->next = pointer->next;
    pointer->next = new_Node;
    LinkedList_display(First);
}

void Insertion_after_Node(struct Node *First, struct Node *previous_Node)
{
    struct Node *new_Node = (struct Node *)malloc(sizeof(struct Node));
    new_Node->data = 505;
    new_Node->next = previous_Node->next;
    previous_Node->next = new_Node;
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
    // LinkedList_display(First);
    char c = 'y';
    while (c == 'y')
    {
        printf("\n\nwhere to Insert? b for At Beginning : e for At End : s for Somewhere in Between : a for After a Node.\n");
        scanf("%c", &c);
        getc(stdin);
        // fgetc(stdin);
        switch (c)
        {
        case 'b':

            Insertion_at_beginning(First);
            break;

        case 'e':

            Insertion_at_End(First);
            break;

        case 's':

            Insertion_Somewhere_in_Between(First, 4);
            break;

        case 'a':

            Insertion_after_Node(First, Second);
            break;
        }
        printf("Want to Repeat again? [y / n]");
        scanf("%c", &c);
        // getc(stdin);
        fflush(stdin);
        if (c != 'y')
            break;
    }
}