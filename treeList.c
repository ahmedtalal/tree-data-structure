#include "treeList.h"
#include <stddef.h>

int isEmpty(tree *root){
    if(root == NULL){
        return 0 ;
    }
    return 1 ;
}
tree* createNode(int value){
    tree *ptr = (tree*)malloc(sizeof(tree)) ;
    ptr->data = value ;
    ptr->left = NULL;
    ptr->right = NULL ;
    return ptr ;
}
tree* insertLeft(tree *root , int value){
    root->left = createNode(value) ;
    return root->left ;
}
tree* insertRight(tree *root , int value){
    root->right = createNode(value) ;
    return root->right ;
}

void inOrderTraversal(tree *root){
    if(isEmpty(root) == 0){
        return ;
    }else {
        inOrderTraversal(root->left);
        printf("%d -> \t" , root->data) ;
        inOrderTraversal(root->right) ;
    }
}

void preOrderTraversal(tree *root){
    if(isEmpty(root) == 0){
        return ;
    }else {
        printf("%d -> \t" , root->data) ;
        preOrderTraversal(root->left) ;
        preOrderTraversal(root->right) ;
    }
}
void postOrderTraversal(tree *root){
    if(isEmpty(root) == 0){
        return ;
    }else {
        postOrderTraversal(root->left) ;
        postOrderTraversal(root->right) ;
        printf("%d -> \t" , root->data);
    }
}

