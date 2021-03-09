#include <stdlib.h>
#include "exemplo.h"

struct List_ {
  int quantity;
  int element[LENGTH];
};

List* createList() {
  List* list = (List*) malloc(sizeof(List));
  
  if (list != NULL) list->quantity = 0;

  return list;
}

int insertBegin(List* list, int value) {
  if (list->quantity == LENGTH) return FALSE;

  /* move todos os elementos da lista um índice para trás,
  deixando o índice zero livre para inserção do novo elemento */
  for (int i = list->quantity; i > 0; i--) {
    list->element[i] = list->element[i-1];
  }

  list->element[0] = value;
  list->quantity++;

  return TRUE;
}

int insertEnd(List* list, int value) {
  if (list->quantity == LENGTH) return FALSE;

  list->element[list->quantity] = value;
  list->quantity++;

  return TRUE;
}

int insertPosition(List* list, int position, int value) {
  if (list->quantity == LENGTH || position > list->quantity || position < 1)
    return FALSE;

  /* move todos os elementos depois da position escolhida para trás,
  abrindo espaço inclusive no índice referente a position escolhida */
  for (int i = list->quantity; i >= position; i--) {
    list->element[i] = list->element[i-1];
  }

  list->element[position - 1] = value;
  list->quantity++;

  return TRUE;
}

int removeBegin(List* list, int* value) {
  if (list->quantity > 0) {
    for (int i = 0; i < list->quantity; i++) {
      list->element[1] = list->element[i+1];
    }

    list->quantity--;

    return TRUE;
  }

  return FALSE;
}

int removeEnd(List* list, int* value) {
  if (list->quantity > 0) {
    *value = list->element[list->quantity - 1];

    return TRUE;
  }

  return FALSE;
}

int removePosition(List* list, int position, int* value) {
  if (position == 1) {
    return removeBegin(list, value);
  }

  if (position == list->quantity) {
    return removeEnd(list, value);
  }

  if (list->quantity > position) {
    *value = list->element[position - 1];

    for (int i = position - 1; i < list->quantity; i++) {
      list->element[i] = list->element[i+1];
    }

    list->quantity--;

    return TRUE;
  }

  return FALSE;
}

int getBegin(List* list, int* value) {
  if (list->quantity > 0) {
    *value = list->element[0];

    return TRUE;
  }

  return FALSE;
}

int getEnd(List* list, int* value) {
  if (list->quantity > 0) {
    *value = list->element[list->quantity - 1];

    return TRUE;
  }

  return FALSE;
}

int getPosition(List* list, int position, int* value) {
  if (position <= list->quantity && position > 0) {
    *value = list->element[position - 1];

    return TRUE;
  }

  return FALSE;
}

void freeList(List* list) {
  free(list);
}
