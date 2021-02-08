#include <stdio.h>
#include "stack.h"

void print_stack(stack* s, int stack_top)
{
    printf("+    +\n"); 
    for (int i = 0; i < stack_top + 1; i++)
        printf("| %d |\n", s->stack[i]);
    printf("+----+\n");  
}

int main()
{
    stack mystack;
    stack_init(&mystack);

    printf("%d\n", stack_push(&mystack, 10));
    printf("%d\n", stack_push(&mystack, 15));
    printf("%d\n", stack_push(&mystack, 20));
    printf("%d\n", stack_push(&mystack, 25));
    printf("%d\n", stack_push(&mystack, 30));
    printf("%d\n", stack_push(&mystack, 35));

    print_stack(&mystack, mystack.top);

    return 0;
}