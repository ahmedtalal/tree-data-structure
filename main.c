#include <stdio.h>
#include <stdlib.h>
#include "treeList.h"

int main()
{
    tree *root = createNode(10) ;
    insertLeft(root , 20);
    insertRight(root , 30) ;
    insertLeft(root->left, 40) ;
    insertRight(root->left , 50) ;
    insertLeft(root->right , 60) ;
    insertRight(root->right , 70) ;

    printf("in order traversal \n") ;
    inOrderTraversal(root) ;

    printf("\n pre order traversal \n") ;
    preOrderTraversal(root) ;

    printf("\n post order traversal \n") ;
    postOrderTraversal(root) ;

    return 0;
}
