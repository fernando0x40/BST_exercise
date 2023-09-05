#include "bst.h"

struct bst
{
    int* key;
    BST *left,*right;
};

BST* empty_bst()
{
    BST* bst = (BST*)malloc(sizeof(BST));
    bst->key = NULL;
    bst->left = NULL;
    bst->right = NULL;
}

void insert_key(KEY key, BST* bst)
{
    if (bst == NULL)
    {
        return;
    }
    if (bst->key != NULL)
    {
        if (key > *(bst->key))
        {
            if (bst->right == NULL)
            {
                bst->right = empty_bst();
            }
            insert_key(key, bst->right);
        }
        else if (key < *(bst->key))
        {
            if (bst->left == NULL)
            {
                bst->left = empty_bst();
            }
            insert_key(key, bst->left);
        }
        else
        {
            // Alert that key is already inserted
            return;
        }
    }
    else
    {
        bst->key = (int*)malloc(sizeof(int));
        *bst->key = key;
    }
}

void erase_bst(BST* bst)
{
    if (bst == NULL)
    {
        return;
    }
    erase_bst(bst->left);
    erase_bst(bst->right);
    free(bst->key);
    free(bst->left);
    free(bst->right);
}