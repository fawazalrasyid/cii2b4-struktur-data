#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define prev(P) (P)->prev
#define next(P) (P)->next
#define first(L) ((L).first)
#define last(L) ((L).last)

struct buku {
    int id;
    string judul, penulis;
};

typedef buku infotype;
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
void insertFirst_1301213016(List &L, adr p);
void show_1301213016(List L);

adr IDMax_1301213016(List L);

#endif // DLL_H_INCLUDED
