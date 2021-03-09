typedef struct Node_ Node;

Node* createNode(int data);

int getData(Node* node);
Node* getNext(Node* node);
void setNext(Node* node, Node* next);
