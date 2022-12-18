#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef char infotype;

struct stack {
    infotype info[15];
    int top;
};

void createStack_1301213016(stack &S);
bool isEmpty_1301213016(stack S);
bool isFull_1301213016(stack S);
void push_1301213016(stack &S, infotype x);
int pop_1301213016(stack &S);
void printInfo_1301213016(stack S);

#endif // STACK_H_INCLUDED
