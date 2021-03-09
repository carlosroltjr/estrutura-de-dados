#include <stdlib.h>
#include <stdio.h>

struct BinaryTree_ {
  int info;
  struct BinaryTree_* left;
  struct BinaryTree_* right;
};

typedef struct BinaryTree_ BinaryTree;

BinaryTree* createBinaryTree(int value) {
  BinaryTree* btree = (BinaryTree*) malloc(sizeof(BinaryTree));
  
  btree->info = value;
  btree->left = NULL;
  btree->right = NULL;

  return btree;
}
void insert(BinaryTree* btree, int value) {
  if(btree == NULL) {
    btree = createBinaryTree(value);
  } else if(btree->info > value) {
    if(btree->left == NULL) {
      btree->left = createBinaryTree(value);
    } else {
      insert(btree->left, value);
    }
  } else if(btree->right == NULL) {
    btree->right = createBinaryTree(value);
  } else {
    insert(btree->right, value);
  }
}

void inOrder(BinaryTree* btree) {
  if(btree != NULL) {
    inOrder(btree->left);
    printf("%d ", btree->info);
    inOrder(btree->right);
  }
}

int search(BinaryTree* btree, int value) {
  if(btree == NULL) {
    return 0;
  } else if(btree->info == value) {
    printf("esquerda: %d, direita: %d\n", btree->left->info, btree->right->info);
    return 1;
  } else if(btree->info > value) {
    return search(btree->left, value);
  } else {
    return search(btree->right, value);
  }
}

BinaryTree* deleteElement(BinaryTree* btree, int value) {
  if(btree->left == NULL) {
    return btree->right;
  } else if(btree->right == NULL) {
    return btree->left;
  } else {
    BinaryTree* cursor = btree;
    BinaryTree* root;

    while(cursor->left != NULL) {
      root = cursor;
      cursor = cursor->left;
    }

    btree->info = cursor->info;
    free(cursor);
    root->left = NULL;

    return btree;
  }
}

int delete(BinaryTree* btree, int value) {
  if(btree == NULL) {
    return 0;
  } else if(btree->info == value) {
    btree = deleteElement(btree, value);
    return 1;
  } else if(btree->info > value) {
    return delete(btree->left, value);
  } else {
    return delete(btree->right, value);
  }
}

int main() {
  BinaryTree* btree = createBinaryTree(10);

  for (int i = 0; i < 50; i++) {
    insert(btree, rand() % 101);
  }

  inOrder(btree);
  printf("\n");
  search(btree, 25);
  delete(btree, 25);
  inOrder(btree);
  printf("\n");
  
}
