#include "stack.h"
#include <iostream>

using namespace std;

void createStack_1301213016(stack &S) {
    S.top = 0;
}

bool isEmpty_1301213016(stack S) {
    if (S.top == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull_1301213016(stack S) {
    if (S.top == 15) {
        return true;
    } else {
        return false;
    }
}

void push_1301213016(stack &S, infotype x){
    if(!isFull_1301213016(S)) {
        S.top = S.top + 1;
        S.info[S.top] = x;
    }
}

int pop_1301213016(stack &S){
    infotype x;
    x = S.info[S.top];
    S.top = S.top - 1;
}

void printInfo_1301213016(stack S) {
    int i;

    if (isEmpty_1301213016(S)) {
        cout << "Stack Kosong!" << endl;
    } else {
        for (i = S.top; i >= 1; i--) {
            cout << S.info[i] << " ";
        }
    }

    cout << endl;
}
