#include <stdio.h>
#include <stdlib.h>

struct stack
{
    char data;
    struct stack *next;
};
struct stack *stack = NULL;

void display_Stack(struct stack *top)
{
    while (top != NULL)
    {
        printf("%c\n", top->data);
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

struct stack *Push(struct stack *Top, char c)
{
    if (!isFull(Top))
    {
        struct stack *new_Node = (struct stack *)malloc(sizeof(struct stack));
        new_Node->data = c;
        new_Node->next = Top;
        Top = new_Node;
        return Top;
    }
}
struct stack *Pop(struct stack *Top, char c)
{
    // printf("%c is Poped out of the stack!\n", Top->data);
    return Top = Top->next;
    // Top->data = "char";
    return Top;
}

int parenthesis_Matching(struct stack *Top, char *Array)
{
    for (int i = 0; Array[i] != '\0'; i++)
    {

        if (Array[i] == '(')
        {
            stack = Push(stack, Array[i]);
        }

        else if (Array[i] == ')')
        {
            if (isEmpth(stack))
            {
                return 0;
            }
            else
            {
                stack = Pop(stack, Array[i]);
            }
        }
    }
    return 1;
}

void main()
{
    struct stack *stack = NULL;
    // char Array[] = {"(54*1+(125(154/14+))))"};
    // char Array[] = {"125-658*458)"};
    // char Array[] = {"{))458-214}/[45+85-2"};
    char Array[] = {"(145/57)-(4587/235*952+)*2(54+2)"};
    // char Array[] = {"[(145/57)-2{(4587/235*952+)}+12(54+2)]"};

    // display_Stack(stack);

    if (parenthesis_Matching(stack, Array))
        printf("\nParenthesis Matches!\n\n");
    else
    {
        printf("\nParenthesis Doesn't Matches!\n\n");
    }
}