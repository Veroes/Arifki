#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>
using namespace std;
#define info(T) T->info
#define left(T) T->left
#define right(T) T->right
typedef int infotype;
typedef struct node *adrNode;
struct node{
    infotype info;
    adrNode left;
    adrNode right;
};
// functions and procedures
adrNode newNode_1301210405(infotype x);
adrNode findNode_1301210405(adrNode root,infotype x);
void insertNode_1301210405(adrNode &root,adrNode p);
void printPreOrder_1301210405(adrNode root);
void printDescendant_1301210405(adrNode root,infotype x);
int sumNode_1301210405(adrNode root);
int countLeaves_1301210405(adrNode root);
int heightTree_1301210405(adrNode root);
#endif // TREE_H_INCLUDED
