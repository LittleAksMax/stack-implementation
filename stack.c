#include "stack.h"

#define TRUE 1
#define FALSE 0

void stack_init(stack* s)
{
    s->top = -1;
    for (int i = 0; i < STACK_LENGTH; i++)
        s->stack[i] = DEFAULT;
}

int stack_push(stack* s, int value)
{
    if (s->top == STACK_LENGTH - 1) return FALSE;
    s->stack[++s->top] = value;
    return TRUE;
}

int stack_pop(stack* s)
{
    if (s->top == -1) return FALSE;
    s->stack[s->top--] = DEFAULT;
    return TRUE;
}