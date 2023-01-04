#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct ElemenTree *adrNode;

struct ElemenTree{
    infotype info;
    adrNode LeftChild;
    adrNode RightChild;
};

adrNode newNode_1301213337(infotype X);
adrNode findNode_1301213337(adrNode root, infotype X);
void insertNode_1301213337(adrNode &root, adrNode P);
void printPreOrder_1301213337(adrNode root);
void printDescendant_1301213337(adrNode root, infotype X);
int sumNode(adrNode root);
int countLeaves_1301213337(adrNode root);
int heightTree_1301213337(adrNode root);

#endif // TREE_H_INCLUDED
