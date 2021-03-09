#include "node.h"
#include <stdlib.h>

struct Node_ {
  int data;
  struct Node_* next;
};

Node* createNode(int data) {
  Node* node = (Node*) malloc(sizeof(struct Node_));

  if (node != NULL) {
    node->data = data;
    node->next = NULL;
  }

  return node;
}

int getData(Node* node) {
  return node->data;
}

Node* getNext(Node* node) {
  return node->next;
}

void setNext(Node* node, Node* next) {
  node->next = next;
}
