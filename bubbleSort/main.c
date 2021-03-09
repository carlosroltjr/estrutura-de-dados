#include "exemplo.h"
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 100000

int main() {
  int arr[LENGTH];

  for (int i = 0; i < LENGTH; i++) {
    arr[i] = rand() % 1000000001;
  }

  for (int i = 0; i < LENGTH; i++) printf("%d ", arr[i]);
  printf("\n\n");

  bubbleSort(arr, LENGTH);
  for (int i = 0; i < LENGTH; i++) printf("%d ", arr[i]);
  printf("\n");
}
