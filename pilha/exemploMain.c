#include "exemplo.h"

int main() {
  int i, value, success;
  Stack *stack = createStack();

  success = pop(stack, &value);

  if (success) {
    printf("Removeu de pilha nova vazia %d\n", value);
  }

  for (i = 0; i < 12; i++) {
    success = push(stack, i * 10);

    if (!success) {
      printf("Pilha cheia!! índice [%d] fora de alcance.\n", i);
    }
  }

  for (i = 0; i < 14; i++) {
    success = pop(stack, &value);

    if (!success) {
      printf("Pilha vazia!! índice [%d] fora de alcance.\n", i);
    } else {
      printf("Retirando o valor %d no índice [%d]\n", value, i);
    }
  }

  for (i = 0; i < 14; i++) {
    success = push(stack, i);

    if (!success) {
      printf("Pilha cheia!! índice [%d] fora de alcance.\n", i);
    }

    if (i % 4) {
      success = pop(stack, &value);

      if (success) {
        printf("Removeu %d da pilha\n", value);
      }
    }
  }

  for (i = 0; i < 14; i++) {
    success = pop(stack, &value);

    if (success) {
      printf("Removeu %d da pilha\n", value);
    } else {
      printf("pilha vazia\n");
    }
  }

  freeStack(stack);
  
  return 0;
}
