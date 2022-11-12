#include "CSLL.h"

void createList_1301213016(listLagu &L){
    first(L) = NULL;
}

void createElemen_1301213016(infotype laguBaru, adr &pLagu) {
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
}

void insertLast_1301213016(listLagu &L, adr pLagu) {
    if (first(L) == NULL){
        first(L) = pLagu;
        next(pLagu) = pLagu;
    } else {
        adr last = first(L);
        while (next(last) != first(L)){
            last = next(last);
        }
        next(pLagu) = first(L);
        next(last) = pLagu;
    }
}

void deleteFirst_1301213016(listLagu &L, adr &pLagu) {
    if (first(L) == NULL){
        cout << "List Kosong" << endl;
    } else {
        adr last = first(L);
        while (next(last) != first(L)){
            last = next(last);
        }
        pLagu = first(L);
        first(L) = next(first(L));
        next(last) = first(L);
        next(pLagu) = NULL;
    }
}

void showSemuaLagu_1301213016(listLagu L) {
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        adr pLagu = first(L);
        int i = 1;

        do {
            cout << i << ". " << info(pLagu).artis << " " << info(pLagu).judul << " " << info(pLagu).genre << " " << info(pLagu).playtime << endl;

            pLagu = next(pLagu);
            i++;

        } while (pLagu != first(L));

        cout << endl;
    }
}
