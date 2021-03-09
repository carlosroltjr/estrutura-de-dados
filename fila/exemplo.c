#include "exemplo.h"

struct Queue_ {
  int quantity;
  int element[LENGTH];
};

Queue* createQueue() {
  Queue* queue = (Queue*) malloc(sizeof(Queue));

  if(queue != NULL) {
    queue->quantity = 0; // inicializa a fila com zero elementos
  }

  return queue;
}

int insert(Queue* queue, int value) {
  if (queue->quantity == LENGTH) return FALSE;

  queue->element[queue->quantity] = value;
  queue->quantity++;

  return TRUE;
}

int removeElement(Queue* queue, int* value) {
  if (queue->quantity > 0) {
    *value = queue->element[0];
    queue->quantity--;

    for (int i = 0; i < queue->quantity; i++) {
      queue->element[i] = queue->element[i+1];
    }

    return TRUE;
  }

  return FALSE;
}

int next(Queue* queue, int* value) {
  if (queue->quantity > 0) {
    *value = queue->element[0];

    return TRUE;
  }

  return FALSE;
}

void freeQueue(Queue* queue) {
  free(queue);
}

int getQuantity(Queue* queue) {
  return queue->quantity;
}
