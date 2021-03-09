#include "exemplo.h"

#define TRUE 1
#define FALSE 0

void isertionSort(int arr[], int length) {
  int i, j , k, temp;

  for (i = 1; i < length; i++) {
    j = i;

    while (j > 0 && arr[j - 1] > arr[i]) {
      j--;
    }
    
    if (j < i) {
      temp = arr[i];

      for (k = i; k > j; k--) {
        arr[k] = arr[k - 1];
      }

      arr[j] = temp;
    }
  }
}
