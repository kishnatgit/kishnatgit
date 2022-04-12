#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *array;
};

int isEmpty(struct stack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *stack)
{
    if (stack->top == stack->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

void main()
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->size = 6;
    stack->top = -1;
    stack->array = (int *)malloc(stack->size * sizeof(int));
    // stack->array[0] = 51;
    // stack->top++;
    // stack->array[1] = 55;
    // stack->top++;
    // stack->array[2] = 59;
    // stack->top++;
    // stack->array[3] = 68;
    // stack->top++;
    // stack->array[4] = 51;
    // stack->top++;
    // stack->array[5] = 71;
    // stack->top++;
    if (isEmpty(stack))
        printf("The Stack Is Empty!\n");
    else
        printf("The Stack Is Not Empty!\n");

    if (isFull(stack))
        printf("The Stack Is Full!\n");
}