#define LENGTH 10
#define TRUE 1
#define FALSE 0

typedef struct List_ List;

List* createList();

int insertBegin(List* list, int value);
int insertEnd(List* list, int value);
int insertPosition(List* list, int position, int value);

int removeBegin(List* list, int* value);
int removeEnd(List* list, int* value);
int removePosition(List* list, int position, int* value);

int getBegin(List* list, int* value);
int getEnd(List* list, int* value);
int getPosition(List* list, int position, int* value);

void freeList(List* list);
