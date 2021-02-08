#define STACK_LENGTH 5
#define DEFAULT (-2147483647 - 1) // INT_MIN

typedef struct {
    int stack[STACK_LENGTH]; // the stack itself
    int top; // the index of the top node, -1 if empty
    // don't need length, as length is top + 1
} stack;

// initialise stack with default values (INT_MIN)
void stack_init(stack*);

// put element on stack
int stack_push(stack*, int);

// take top element off stack
int stack_pop(stack*);
