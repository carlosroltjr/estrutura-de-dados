#include "exemplo.h"
#include <stdio.h>

int main() {
  int i, value, success;
  Queue* queue = createQueue();

  printf("Removendo elemento da fila...\n");
  success = removeElement(queue, &value);
  if (!success) printf("Erro: fila vazia!!\n");

  printf("Inserindo 12 elementos na fila...\n");
  for (i = 0; i < 12; i++) {
    success = insert(queue, i * 3);

    if (!success) {
      printf("Erro: fila cheia, índice %d fora de alcance\n", i);
    }
  }

  printf("valor de quantity: %d\n", getQuantity(queue));

  printf("Removendo 14 elementos na fila...\n");
  for (i = 0; i < 14; i++) {
    success = removeElement(queue, &value);

    if (!success) {
      printf("Erro: fila vazia, índice %d fora de alcance\n", i);
    }
    else {
      printf("Removendo o valor %d no índice %d\n", value, i);
    }
  }

  printf("valor de quantity: %d\n", getQuantity(queue));

  printf("Inserindo e removendo 14 elementos da fila...\n");
  for (i = 0; i < 14; i++) {
    success = insert(queue, i * 5);

    if (success) printf("Inseriu o valor %d na fila\n", i * 5);

    if (i % 4) {
      success = removeElement(queue, &value);
      if (success) {
        printf("Removeu o valor %d da fila\n", value);
      }
    }
  }

  printf("valor de quantity: %d\n", getQuantity(queue));

  for(i = 0; i < 14; i++) {
    success = removeElement(queue, &value);

    if (success) {
      printf("Removeu %d da fila\n", value);
    }
    else {
      printf("Fila vazia\n");
    }
  }

  freeQueue(queue);
  
  return 0;
}
