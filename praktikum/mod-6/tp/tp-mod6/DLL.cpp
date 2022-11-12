#include "DLL.h"

int selectMenu_1301213016() {
    cout << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan data dengan ID terbesar" << endl;
    cout << endl;

    cout << "Pilihan menu: ";

    int input = 1;
    cin >> input;

    cout << endl;

    return input;
}

void createList_1301213016(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

adr newElement_1301213016(infotype x) {
    adr P = new element;
    info(P) = x;
    prev(P) = NULL;
    next(P) = NULL;

    return P;
}

void insertFirst_1301213016(List &L, adr P) {
    if (first(L) == NULL && last(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void show_1301213016(List L) {
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        adr P = first(L);
        while (P != NULL) {
            cout << "ID: " << info(P).id << endl;
            cout << "Judul: " << info(P).judul << endl;
            cout << "Penulis: " << info(P).penulis << endl;

            cout << endl;

            P = next(P);
        }
        cout << endl;
    }
}

adr IDMax_1301213016(List L) {
    adr P = first(L);
    adr Q = first(L);

    while (P != NULL) {
        if (info(P).id > info(Q).id) {
            Q = P;
        }

        P = next(P);
    }

    return Q;
}
