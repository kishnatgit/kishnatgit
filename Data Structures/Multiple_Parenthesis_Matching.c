#include <stdio.h>
#include <stdlib.h>

struct stack
{
    char data;
    struct stack *next;
};

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
struct stack *Pop(struct stack *Top, char top)
{

    if (Top->data == top)
    {
        return Top = Top->next;
    }
    else

        return Top;
}

int parenthesis_Matching(struct stack *stack, char *Array)
{
    char a = '\0', b = '\0', c = '\0';
    for (int i = 0; Array[i] != '\0'; i++)
    {

        if (Array[i] == '(')
        {
            stack = Push(stack, Array[i]);
            a = Array[i];
        }
        else if (Array[i] == '{')
        {
            stack = Push(stack, Array[i]);
            b = Array[i];
        }
        else if (Array[i] == '[')
        {
            stack = Push(stack, Array[i]);
            c = Array[i];
        }

        else if (Array[i] == ')')
        {
            if (isEmpth(stack))
            {
                return 0;
            }
            else
            {
                stack = Pop(stack, a);
            }
        }
        else if (Array[i] == '}')
        {
            if (isEmpth(stack))
            {
                return 0;
            }
            else
            {
                stack = Pop(stack, b);
            }
        }
        else if (Array[i] == ']')
        {
            if (isEmpth(stack))
            {
                return 0;
            }
            else
            {
                stack = Pop(stack, c);
            }
        }
    }
    if (stack == NULL)
        return 1;
}

void main()
{
    struct stack *stack = NULL;
    // char Array[] = {"(54*1+(125(154/14+))))"};
    char Array[] = {"[z125-658*458)"};
    // char Array[] = {"{))458-214}/[45+85-2"};
    // char Array[] = {"(145/57)-(4587/235*952+)*2(54+2)"};
    // char Array[] = {"[(145/57)-2{(4587/235*952+)}+12(54+2)]"};

    // display_Stack(stack);

    if (parenthesis_Matching(stack, Array))
        printf("\nParenthesis Matches!\n\n");
    else
    {
        printf("\nParenthesis Doesn't Matches!\n\n");
    }
}