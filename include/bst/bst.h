#if !defined(BST_H)
#define BST_H

#include <stdlib.h>

typedef struct bst *BST;
typedef int KEY;

BST empty_bst();
void insert_key(KEY key, BST bst);
void erase_bst(BST bst);
int bst_height(BST bst);

#endif // BST_H
