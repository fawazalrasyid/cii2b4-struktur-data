#include "tree.h"

adrNode newNode_1301213016(infotype x) {
    adrNode p = new node;
    data(p) = x;
    left(p) = NULL;
    right(p) = NULL;
    return p;
}

adrNode findNode_1301213016(adrNode root, infotype x){
    if(root == NULL){
        return NULL;
    }else if(data(root) == x){
        return root;
    }else{
        adrNode p = findNode_1301213016(left(root), x);
        if(p != NULL){
            return p;
        }else{
            return findNode_1301213016(right(root), x);
        }
    }
}

void insertNode_1301213016(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else{
        if(data(p) < data(root)){
            insertNode_1301213016(left(root), p);
        }else{
            insertNode_1301213016(right(root), p);
        }
    }
}

void printPreOrder_1301213016(adrNode root){
    if(root != NULL){
        cout << data(root) << " ";
        printPreOrder_1301213016(left(root));
        printPreOrder_1301213016(right(root));
    }
}

void printDescendant_1301213016(adrNode root, infotype x){
    adrNode p = findNode_1301213016(root, x);
    if(p != NULL){
        printPreOrder_1301213016(p);
    }
}

int sumNode_1301213016(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        return data(root) + sumNode_1301213016(left(root)) + sumNode_1301213016(right(root));
    }
}

int countLeaves_1301213016(adrNode root){
    if(root == NULL){
        return 0;
    }else if(left(root) == NULL && right(root) == NULL){
        return 1;
    }else{
        return countLeaves_1301213016(left(root)) + countLeaves_1301213016(right(root));
    }
}

int heightTree_1301213016(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        int leftHeight = heightTree_1301213016(left(root));
        int rightHeight = heightTree_1301213016(right(root));
        return max(leftHeight, rightHeight) + 1;
    }
}
