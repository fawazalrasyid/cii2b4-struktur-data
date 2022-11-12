#include "DLL.h"

int selectMenu_1301213016() {
    cout << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Membalik list" << endl;
    cout << "4. Menampilkan nilai terkecil ke-2" << endl;
    cout << "0. Exit" << endl;
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

void show_1301213016(List L) {
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        adr P = first(L);
        while (P != NULL) {
            cout << "Norek: " << info(P).norek << endl;
            cout << "Nama: " << info(P).nama << endl;
            cout << "Bank: " << info(P).bank << endl;
            cout << "Saldo: " << info(P).saldo << endl;

            cout << endl;

            P = next(P);
        }
        cout << endl;
    }
}

void reverseList_1301213016(List &L) {
    adr P = first(L);
    adr Q = first(L);

    while (next(P) != NULL) {
        P = next(P);
    }

    first(L) = P;
    next(P) = Q;
    prev(Q) = P;
    last(L) = Q;
    next(Q) = NULL;
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

double secondSmallest_1301213016(List L) {
    adr P = first(L);
    double smallest = info(P).saldo;
    double secSmallest = info(P).saldo;

    while (next(P) != NULL) {
        if (info(P).saldo < smallest) {
            secSmallest =  smallest;
            smallest = info(P).saldo;
        } else if (info(P).saldo < secSmallest) {
            secSmallest = info(P).saldo;
        }

        P = next(P);
    }

    return secSmallest;
}
