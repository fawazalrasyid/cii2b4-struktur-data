#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <iostream>

using namespace std;

#define info(pLagu) (pLagu)->info
#define next(pLagu) (pLagu)->next
#define first(L) ((L).first)
#define last(L) ((L).last)

struct infotype {
    string artis, judul, genre;
    int playtime;
};

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct listLagu {
    adr first;
};

void createList_1301213016(listLagu &L);
void createElemen_1301213016(infotype laguBaru, adr pLagu);
void insertFirst_1301213016(listLagu &L, adr pLagu);
void deleteLast_1301213016(listLagu &L, adr pLagu);
void showSemuaLagu_1301213016(listLagu L);

#endif // CSLL_H_INCLUDED
