#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(F) ((F).first)

typedef char infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList_1301213016(List &F);
adr newElement_1301213016(infotype x);
void insertFirst_1301213016(List &F, adr p);
void show_1301213016(List F);
adr deleteLast_1301213016(List &F);
void insertLast_1301213016(List &F, adr p);

#endif // SLL_H_INCLUDED
