#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "node.h"

#define TRUE 1
#define FALSE 0

struct List_ {
  Node* head;
  Node* tail;
  int size;
};


List* createList() {
  List* list = (List*) malloc(sizeof(List));
  
  list->head = NULL;
  list->tail = NULL;
  list->size = 0;

  return list;
}

int empty(List* list) {
  if (list->size == 0) return TRUE;
  
  return FALSE;
}

int insertHead(List* list, int value) {
  Node* node;
  node = createNode(value);

  if (empty(list)) {
    list->tail = node;
  } else {
    setNext(node, list->head);
  }

  list->head = node;
  list->size++;

  return TRUE;
}

int removeHead(List* list, int* value) {
  if (empty(list)) return FALSE;

  *value = getData(list->head);

  Node* temp = list->head;

  if (list->size == 1) {
    list->head = NULL;
    list->tail = NULL;
  } else {
    list->head = temp->next;
  }
}
