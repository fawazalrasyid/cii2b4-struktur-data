#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
    stack S;

    createStack_1301213016(S);

    push_1301213016(S, 'I');
    push_1301213016(S, 'R');
    push_1301213016(S, 'I');
    push_1301213016(S, 'D');
    push_1301213016(S, 'A');
    push_1301213016(S, 'Y');
    push_1301213016(S, 'A');
    push_1301213016(S, 'C');
    push_1301213016(S, 'R');
    push_1301213016(S, 'E');
    push_1301213016(S, 'P');

    printInfo_1301213016(S);

    pop_1301213016(S);
    pop_1301213016(S);
    pop_1301213016(S);
    pop_1301213016(S);
    pop_1301213016(S);
    pop_1301213016(S);
    pop_1301213016(S);

    printInfo_1301213016(S);

    return 0;
}
