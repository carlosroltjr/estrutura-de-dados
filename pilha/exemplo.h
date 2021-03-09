#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define LENGTH 10

typedef struct Stack_ Stack;

Stack *createStack();
int push(Stack *stack, int value);
int pop(Stack *stack, int *value);
int top(Stack *stack, int *value);
void freeStack(Stack *stack);
