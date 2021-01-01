
typedef struct treeNode{
    int data ;
    struct treeNode *left ;
    struct treeNode *right ;
}tree ;

int isEmpty() ;
void inOrderTraversal(tree *root) ;
void preOrderTraversal(tree *root) ;
void postOrderTraversal(tree *root) ;
tree* createNode(int value) ;
tree* insertLeft(tree *root , int value) ;
tree* insertRight(tree *root , int value) ;
