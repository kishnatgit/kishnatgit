#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

void display_Stack(struct stack *top)
{
    while (top != NULL)
    {
        printf("%d\n", top->data);
        top = top->next;
    }
}

int isEmpth(struct stack *First)
{
    struct stack *top = First;
    if (top == NULL)
    {
        // printf("The Stack is Empty!\n");
        return 1;
    }
    else
        return 0;
}

int isFull(struct stack *First)
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    if (p == NULL)
    {
        printf("Stack Overflow...");
        return 1;
    }
    else
        return 0;
}

struct stack *Push(struct stack *Top)
{
    if (!isFull(Top))
    {
        struct stack *new_Node = (struct stack *)malloc(sizeof(struct stack));
        int value;
        printf("Enter the Value to Push:\n");
        scanf("%d", &value);
        fflush(stdin);
        new_Node->data = value;
        new_Node->next = Top;
        Top = new_Node;
        return Top;
    }
}
struct stack *Pop(struct stack *Top)
{
    if (!isEmpth(Top))
    {
        printf("%d is Poped out of the stack!\nNow Remaining Elements are:\n", Top->data);
        return Top = Top->next;
    }
    else
        printf("Stack Underflow...\n");
    return Top;
}

int peek(struct stack *Top, int index)
{
    int i = 1;
    while (i != index)
    {
        Top = Top->next;
        i++;
    }
    return Top->data;
}

int stack_Top(struct stack *Top)
{
    if (!isEmpth(Top))
    {
        return Top->data;
    }
    else
        return 0;
}

int stack_Bottom(struct stack *Top)
{
    if (!isEmpth(Top))
    {
        while (Top->next != NULL)
        {
            Top = Top->next;
        }
        return Top->data;
    }
    else
        return 0;
}

void main()
{
    struct stack *stack = NULL;
    isEmpth(stack);
    char c;
    do
    {
        stack = Push(stack);
        printf("Wanna push further?[y/n]");
        scanf("%c", &c);
        fgetc(stdin);
    } while (c == 'y');

    display_Stack(stack);

    printf("Wanna Pop?[y/n]");
    scanf("%c", &c);
    fgetc(stdin);
    if (c == 'y')
        do
        {
            if (c == 'y')
            {
                stack = Pop(stack);
                display_Stack(stack);
                printf("Wanna pop further?[y/n]");
                scanf("%c", &c);
                fgetc(stdin);
            }
        } while (c == 'y');
    display_Stack(stack);

    int peek_value = peek(stack, 3);
    printf("The Value at peek index is %d\n", peek_value);
    // display_Stack(stack);
    printf("Stack Top: %d\n", stack_Top(stack));
    printf("Stack Bottom: %d\n", stack_Bottom(stack));
}