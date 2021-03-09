#include "exemplo.h"

#define TRUE 1
#define FALSE 0

void bubbleSort(int arr[], int length) {
  int ordered = FALSE;
  int i, temp;
  
  do {
    ordered = TRUE;

    for (i = 0; i < length - 1; i++) {
      if (arr[i] > arr[i+1]) {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

        ordered = FALSE;
      }
    }
  } while(ordered == FALSE);
}
