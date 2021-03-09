#include "exemplo.h"
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main() {
  int arr[LENGTH];

  for (int i = 0; i < LENGTH; i++) {
    arr[i] = rand() % 101;
  }

  for (int i = 0; i < LENGTH; i++) printf("%d ", arr[i]);
  printf("\n\n");

  isertionSort(arr, LENGTH);
  for (int i = 0; i < LENGTH; i++) printf("%d ", arr[i]);
  printf("\n");
}
