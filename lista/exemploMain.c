#include <stdio.h>
#include "exemplo.h"

int main() {
  int i, j, value;
  List* list = createList();

  if (list == NULL) {
    printf("Erro ao criar lista!!\n");
  }

  j = 10;
  for (i = 0; i < 5; i++, j++) {
    insertPosition(list, i+1, j);
  }

  for (i = 0; i < 5; i++) {
    insertPosition(list, 1, 4 - i);
  }

  j = 5;
  for (i = 0; i < 4; i++, j++) {
    insertPosition(list, i, j);
  }

  insertPosition(list, 9, 9);
  
  

  return FALSE;
}
