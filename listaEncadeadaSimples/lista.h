typedef struct List_ List;

List* createList();

int empty(List* list);

int insertHead(List* list, int value);
int insertTail(List* list, int value);
int insertPosition(List* list, int position, int value);

int removeHead(List* list, int* value);

int showDirect(List* list);