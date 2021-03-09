#include "exemplo.h"

struct Stack_ {
  int quantity;
  int element[LENGTH];
};

Stack *createStack() {
  Stack *stack = (Stack *) malloc(sizeof(Stack));

  if (stack != NULL) {
    stack->quantity = 0;
  }

  return stack;
}

int push(Stack *stack, int value) {
  if (LENGTH == stack->quantity)
    return FALSE;

  stack->element[stack->quantity] = value;
  stack->quantity++;

  return TRUE;
}

int pop(Stack *stack, int *value) {
  if (stack->quantity > 0) {
    --(stack->quantity);
    *value = stack->element[stack->quantity];

    return TRUE;
  }

  return FALSE;
}

int top(Stack *stack, int *value) {
  if (stack->quantity > 0) {
    *value = stack->element[stack->quantity - 1];

    return TRUE;
  }

  return FALSE;
}

void freeStack(Stack *stack) {
  free(stack);
}
