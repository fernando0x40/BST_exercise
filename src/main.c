#include "../include/bst/bst.h"
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        exit(0);
    }
    int NRandomKeys = atoi(argv[2]) ;

    BST binarySearchTree = empty_bst();

    // Random numbers generation
    srand(time(NULL));
    for (size_t i = 0; i < NRandomKeys; i++)
    {
        insert_key(rand(), binarySearchTree);
    }
    

    return 0;
}
