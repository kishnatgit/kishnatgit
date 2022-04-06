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
void print_Stack(struct stack *stack)
{
    int x = stack->top;
    while (x != -1)
    {
        printf("%d\n", stack->array[x]);
        x--;
    }
}

void peek(struct stack *stack, int index)
{
    int x = stack->top;
    for (int i = 1; i <= stack->top + 1; i++)
    {
        if (i == index)
        {
            printf("%d\n", stack->array[x]);
            break;
        }
        x--;
    }
}

void Push(struct stack *stack)
{
    int value;
    if (!isFull(stack))
    {
        printf("Enter the Value to Push:");
        scanf("%d", &value);
        fflush(stdin);
        stack->top++;
        stack->array[stack->top] = value;
    }
    else

        printf("Stack Overflow...\n");
}
void pop(struct stack *stack)
{
    printf("%d is poped out!\n", stack->array[stack->top]);
    stack->top--;
}

void main()
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->size = 10;
    stack->top = -1;
    stack->array = (int *)malloc(stack->size * sizeof(int));
    if (isEmpty(stack))
        printf("The Stack Is Empty!\n");
    else
        printf("The Stack Is Not Empty!\n");
    char c = 'y';
    do
    {
        if (c == 'y')
        {
            Push(stack);
        }
        else
            break;
        printf("Wanna push further?[y/n]");
        scanf("%c", &c);
        fgetc(stdin);
    } while (stack->top != stack->size);
    if (isFull(stack))
        printf("The Stack Is Full!\n");

    print_Stack(stack);

    printf("Wanna pop?[y/n]");
    scanf("%c", &c);
    fgetc(stdin);
    do
    {
        if (c == 'y')
        {
            pop(stack);
        }
        else
            break;
        printf("Wanna pop further?[y/n]");
        scanf("%c", &c);
        fgetc(stdin);
    } while (stack->top != -1);

    print_Stack(stack);
    printf("\n");
    peek(stack, 3);
}