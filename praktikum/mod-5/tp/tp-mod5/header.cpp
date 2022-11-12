#include "header.h"

int selectMenu_1301213016() {
    cout << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan persentasi huruf vokal" << endl;
    cout << "4. Menampilkan last K" << endl;
    cout << endl;

    cout << "Pilihan menu: ";

    int input = 0;
    cin >> input;

    cout << endl;

    return input;
}

void createList_1301213016(List &F) {
    first(F) = NULL;
}

adr newElement_1301213016(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertLast_1301213016(List &F, adr p) {
    adr q;

    if (first(F) == NULL) {
        first(F) = p;
    } else {
        q = first(F);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = p;
    }
}

void show_1301213016(List F) {
    if (first(F) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        adr p = first(F);
        while (p != NULL) {
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    }
}

adr deleteLast_1301213016(List &F) {
    adr p, q;

    if (first(F) == NULL) {
        p = NULL;
        cout << "List Kosong" << endl;
    } else if (next(first(F)) == NULL) {
        p = first(F);
        first(F) = NULL;
    } else {
        q = first(F);
        p = first(F);
        while (next(p) != NULL) {
            q = p;
            p = next(p);
        }
        next(q) = NULL;
    }

    return p;
}

double vocalPersentage_1301213016(List F) {
    double x = 0, y = 0, persentase = 0;
    adr p = first(F);

    while (p != NULL) {

        if (info(p) == 'a' || info(p) == 'A' || info(p) == 'e' || info(p) == 'E' || info(p) == 'i' || info(p) == 'I' || info(p) == 'o' || info(p) == 'O' || info(p) == 'u' || info(p) == 'U') {
            y++;
        }

        x++;

        p = next(p);

    }

    persentase = ((y/x) * 100.0);


    return persentase;
}

void showLastK_1301213016(List F, int k) {
    int i = 0, l = 0;
    adr p = first(F);
    adr q = first(F);

    while (p != NULL) {
        l++;
        p = next(p);
    }

    if (l >= k) {
        while (i < (l-k)) {
            i++;
            q = next(q);
        }
        cout << info(q) << " " << endl;
    } else if (k > l){
        cout << "Nilai K lebih besar dari panjang list" << endl;
    } else {
        cout << "List Kosong" << endl;
    }
}
