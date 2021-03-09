#include <stdlib.h>

#define LENGTH 10
#define TRUE 1
#define FALSE 0

typedef struct Queue_ Queue;

Queue* createQueue();
int insert(Queue* queue, int value);
int removeElement(Queue* queue, int* value);
int next(Queue* queue, int* value);
void freeQueue(Queue* queue);
int getQuantity(Queue* queue);
