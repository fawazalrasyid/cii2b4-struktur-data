#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define prev(P) (P)->prev
#define next(P) (P)->next
#define first(L) ((L).first)
#define last(L) ((L).last)

struct nasabah {
    string norek, nama, bank;
    double saldo;
};

typedef nasabah infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr prev, next;
};

struct List {
    adr first;
    adr last;
};

int selectMenu_1301213016();

void createList_1301213016(List &L);
adr newElement_1301213016(infotype x);
void show_1301213016(List L);
void reverseList_1301213016(List &L);
void insertFirst_1301213016(List &L, adr p);

double secondSmallest_1301213016(List L);

#endif // DLL_H_INCLUDED
