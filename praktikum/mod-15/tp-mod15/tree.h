#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

using namespace std;

#define data(P) (P)->data
#define left(P) (P)->left
#define right(P) (P)->right

typedef int infotype;
typedef struct node *adrNode;

struct node {
    infotype data;
    adrNode left;
    adrNode right;
};

adrNode newNode_1301213016(infotype x);
adrNode findNode_1301213016(adrNode root, infotype x);
void insertNode_1301213016(adrNode &root, adrNode p);
void printPreOrder_1301213016(adrNode root);
void printDescendant_1301213016(adrNode root, infotype x);
int sumNode_1301213016(adrNode root);
int countLeaves_1301213016(adrNode root);
int heightTree_1301213016(adrNode root);

#endif // TREE_H_INCLUDED
