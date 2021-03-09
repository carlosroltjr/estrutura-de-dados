#include <stdio.h>

void selectionSort(int arr[], int length) {
  int i, j, smaller, temp;

  for (i = 0; i < length -1; i++) {
    smaller = i;

    for (j = i; j < length; j++) {
      if(arr[j] < arr[smaller]) {
        smaller = j;
      }
    }

    if (arr[i] > arr[smaller]) {
      temp = arr[smaller];
      arr[smaller] = arr[i];
      arr[i] = temp;
    }
  } 
}
