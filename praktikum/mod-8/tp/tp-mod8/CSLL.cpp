#include "CSLL.h"

void createList_1301213016(listLagu &L){
    first(L) = NULL;
}

void createElemen_1301213016(infotype laguBaru, adr pLagu) {
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
}

void insertFirst_1301213016(listLagu &L, adr pLagu) {
    if (first(L) == NULL) {
        first(L) = pLagu;
        next(pLagu) = pLagu;
    } else {
        adr last = first(L);

        while (next(last) != first(L)) {
            last = next(last);
        }

        next(pLagu) = first(L);
        next(last) = pLagu;
        first(L) = pLagu;
    }
}

void deleteLast_1301213016(listLagu &L, adr pLagu) {
    adr Q;
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (next(first(L)) == NULL) {
        pLagu = first(L);
        first(L) = NULL;
    } else {
        Q = first(L);
        while (next(next(Q)) != NULL) {
            Q = next(Q);
        }
        pLagu = next(Q);
        next(Q) = NULL;
    }
}

void showSemuaLagu_1301213016(listLagu L) {
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        adr pLagu = first(L);

        do {
            cout << "Artis: " << info(pLagu).artis << endl;
            cout << "Judul: " << info(pLagu).judul << endl;
            cout << "Genre: " << info(pLagu).genre << endl;
            cout << "playtime: " << info(pLagu).playtime << endl;

            cout << endl;

            pLagu = next(pLagu);

        } while (pLagu != first(L));

        /**while (pLagu != NULL && pLagu != first(L)) {
            cout << "Artis: " << info(pLagu).artis << endl;
            cout << "Judul: " << info(pLagu).judul << endl;
            cout << "Genre: " << info(pLagu).genre << endl;
            cout << "playtime: " << info(pLagu).playtime << endl;

            cout << endl;

            pLagu = next(pLagu);
        }**/

        cout << endl;
    }
}
