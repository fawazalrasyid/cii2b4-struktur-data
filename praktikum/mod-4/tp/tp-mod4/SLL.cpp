#include "SLL.h"

void createList_1301213016(List &F) {
    first(F) = NULL;
}

adr newElement_1301213016(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertFirst_1301213016(List &F, adr p) {
    if (first(F) == NULL) {
        first(F) = p;
    } else {
        next(p) = first(F);
        first(F) = p;
    }
}

void show_1301213016(List F) {
    if (first(F) != NULL) {
        adr p = first(F);
        while (p != NULL) {
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
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

adr deleteFirst_1301213016(List &F) {
    adr p;

    if (first(F) == NULL) {
        p = NULL;
        cout << "List Kosong" << endl;
    } else {
        p = first(F);
        first(F) = next(p);
        next(p) = NULL;
    }

    return p;
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
