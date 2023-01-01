#include "planologi.h"
#include <iostream>

using namespace std;

void createListParent(listParent &L){
    first(L) = NULL;
    last(L) = NULL;
}

adrParent createNewElmParent(infotypeParent X){
    adrParent P = new elmParent;
    info(P) = X;
    next(P) = NULL;
    return P;
}

void insertFirstParent(listParent &L, adrParent P){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
        next(P) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
        next(last(L)) = first(L);
    }
}

void insertAfterParent(listParent &L, adrParent P, adrParent Prec){
    next(P) = next(Prec);
    next(Prec) = P;

}

void insertLastParent(listParent &L, adrParent P){
    next(last(L)) = P;
    last(L) = P;
    next(last(L)) = first(L);
}

void insertParent(listParent &L, adrParent P){
    if(first(L) == NULL){
        insertFirstParent(L, P);
    }else{
        adrParent Q = first(L);
        adrParent Prec = NULL;
        while(info(Q).nama < info(P).nama && next(Q) != first(L)){
            Prec = Q;
            Q = next(Q);
        }

        if(next(Q) != first(L) && Prec != NULL){
            insertAfterParent(L, P, Prec);
        } else{
            if (info(Q).nama > info(P).nama){
                insertFirstParent(L, P);
            } else {
                insertLastParent(L, P);
            }

        }
    }
}

void deleteFirstParent(listParent &L){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrParent P = first(L);
        first(L) = next(P);
        next(last(L)) = first(L);
        next(P) = NULL;
    }
}

void deleteAfterParent(listParent &L, adrParent Prec){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrParent P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
}

void deleteLastParent(listParent &L){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrParent P = first(L);
        while (next(P) != last(L)) {
            P = next(P);
        }
        next(P) = first(L);
        last(L) = P;
    }
}

void deleteParent(listParent &L, listRelasi &LR, string X){
    if(first(L) == last(L)){
        deleteFirstParent(L);
    }else{
        adrParent P = searchParent(L, X);
        if(P != NULL){
            adrParent Q = first(L);
            if(Q != P) {
                while(next(Q) != P){
                    Q = next(Q);
                }
                deleteAfterParent(L, Q);
            } else if(next(Q) == first(L)) {
                deleteLastParent(L);
            } else {
                deleteFirstParent(L);
            }
        }

        adrRelasi R = searchRelasiByParent(LR, P);
        if(R != NULL){
            adrRelasi S = first(LR);
            if(S != R) {
                while(next(S) != R){
                    S = next(S);
                }
                deleteAfterRelasi(LR, S);
            } else if(next(S) == NULL) {
                deleteLastRelasi(LR);
            } else {
                deleteFirstRelasi(LR);
            }
        }
    }
}

void showParent(listParent L){
    if (first(L) == NULL) {
        cout << "Tidak ada data!" << endl;
    } else {
        adrParent P = first(L);
        int i = 1;
        while (next(P) != first(L)) {
            cout << i << ". " << info(P).nama << endl;
            P = next(P);
            i++;
        }
        cout << i << ". " << info(P).nama << endl;
    }

}

adrParent searchParent(listParent L, string X){
    adrParent P = first(L);
    while (P != NULL) {
        if (info(P).nama == X) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

//////////////////////////////////////////////////////////

void createListChild(listChild &L){
    first(L) = NULL;
    last(L) = NULL;
}

adrChild createNewElmChild(infotypeChild X){
    adrChild P = new elmChild;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirstChild(listChild &L, adrChild P){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertAfterChild(listChild &L, adrChild P, adrChild Prec){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = next(Prec);
        prev(next(Prec)) = P;
        next(Prec) = P;
        prev(P) = Prec;
    }
}

void insertLastChild(listChild &L, adrChild P){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void insertChild(listChild &L, adrChild P){
    if(first(L) == NULL){
        insertFirstChild(L, P);
    }else{
        adrChild Q = first(L);
        adrChild Prec = NULL;
        while(info(Q).nama < info(P).nama && next(Q) != NULL){
            Prec = Q;
            Q = next(Q);
        }

        if(next(Q) != NULL && Prec != NULL){
            insertAfterChild(L, P, Prec);
        } else{
            if (info(Q).nama > info(P).nama){
                insertFirstChild(L, P);
            } else {
                insertLastChild(L, P);
            }

        }
    }
}

void deleteFirstChild(listChild &L){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrChild P = first(L);
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    }
}

void deleteAfterChild(listChild &L, adrChild Prec) {
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrChild P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteLastChild(listChild &L){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrChild P = last(L);
        last(L) = prev(P);
        prev(P) = NULL;
        next(last(L)) = NULL;
    }
}

void deleteChild(listChild &L, listRelasi &LR, string X){
    adrChild P = searchChild(L, X);

    if(P) {
        if(first(L) == last(L)){
            deleteFirstChild(L);
        } else{
            adrChild Q = first(L);
            if(Q != P) {
                while(next(Q) != P){
                    Q = next(Q);
                }
                deleteAfterChild(L, Q);
            } else if(next(Q) == NULL) {
                deleteLastChild(L);
            } else {
                deleteFirstChild(L);
            }

            adrRelasi R = searchRelasiByChild(LR, P);
            if(R != NULL){
                adrRelasi S = first(LR);
                if(S != R) {
                    while(next(S) != R){
                        S = next(S);
                    }
                    deleteAfterRelasi(LR, S);
                } else if(next(S) == NULL) {
                    deleteLastRelasi(LR);
                } else {
                    deleteFirstRelasi(LR);
                }
            }
        }
    }

}

void showChild(listChild L){
    if (first(L) == NULL) {
        cout << "Tidak ada data!" << endl;
    } else {
        adrChild P = first(L);
        int i = 1;
        while (next(P) != NULL) {
            cout << i << ". " << info(P).nama << " (" << info(P).jenis << ")" << endl;
            P = next(P);
            i++;
        }
        cout << i << ". " << info(P).nama << " (" << info(P).jenis << ")" << endl;
    }
}

adrChild searchChild(listChild L, string X){
    adrChild P = first(L);
    while (P != NULL) {
        if (info(P).nama == X) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

//////////////////////////////////////////////////////////

void createListRelasi(listRelasi &L){
    first(L) = NULL;
    last(L) = NULL;
}

adrRelasi createNewElmRelasi(adrParent PP, adrChild PC){
    adrRelasi P = new elmRelasi;
    parent(P) = PP;
    child(P) = PC;
    next(P) = NULL;
    return P;
}

void insertFirstRelasi(listRelasi &L, adrRelasi P){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertAfterRelasi(listRelasi &L, adrRelasi P, adrRelasi Prec){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void insertLastRelasi(listRelasi &L, adrRelasi P){
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        last(L) = P;
    }
}

void deleteFirstRelasi(listRelasi &L){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrRelasi P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void deleteAfterRelasi(listRelasi &L, adrRelasi Prec){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrRelasi P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
}

void deleteLastRelasi(listRelasi &L){
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (first(L) == last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        adrRelasi P = first(L);
        while (next(P) != last(L)) {
            P = next(P);
        }
        next(P) = first(L);
        last(L) = P;
    }
}

void deleteRelasi(listRelasi &L, adrParent Parent, adrChild Child){
    adrRelasi P = searchRelasi(L, Parent, Child);

    if(P) {
        if(first(L) == last(L)){
            deleteFirstRelasi(L);
        }else{
            adrRelasi Q = first(L);
            if(Q != P) {
                while(next(Q) != P){
                    Q = next(Q);
                }
                deleteAfterRelasi(L, Q);
            } else if(next(Q) == NULL) {
                deleteLastRelasi(L);
            } else {
                deleteFirstRelasi(L);
            }
        }
    } else {
        cout << "Relasi tidak ditemukan!" << endl;
    }

}

void showRelasi(listRelasi L) {
    if(first(L) == NULL){
        cout<<"Tidak ada data!"<<endl;
    }else{
        adrRelasi P = first(L);
        while(next(P) != NULL){
            cout<< "Kota : " << info(parent(P)).nama << " -> "; cout<<"Jalan : " <<info(child(P)).nama <<endl;

            P = next(P);
        }

        cout<< "Kota : " << info(parent(P)).nama << " -> "; cout<<"Jalan : " <<info(child(P)).nama <<endl;
    }
}

adrRelasi searchRelasi(listRelasi L, adrParent Parent, adrChild Child){
    adrRelasi P = first(L);
    while(P != NULL){
        if(parent(P) == Parent && child(P) == Child){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

adrRelasi searchRelasiByParent(listRelasi L, adrParent Parent){
    adrRelasi P = first(L);
    while(P != NULL){
        if(parent(P) == Parent){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

adrRelasi searchRelasiByChild(listRelasi L, adrChild Child){
    adrRelasi P = first(L);
    while(P != NULL){
        if(child(P) == Child){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

/////////////////////////////////////////////////////////

void showParentWithChild(listParent LP, listRelasi LR) {
    if (first(LP) == NULL) {
        cout << "Tidak ada data!" << endl;
    } else {
        adrParent P = first(LP);
        while (next(P) != first(LP)) {
            cout << "Data jalan di kota " << info(P).nama << " : " << endl;

            if (first(LR) == NULL) {
                cout << "Tidak ada data!" << endl;
            } else {
                adrRelasi R = first(LR);
                int i = 1;
                while (R != NULL) {
                    if(parent(R) == P){
                        cout << i << ". " << info(child(R)).nama << " (" << info(child(R)).jenis << ")" << endl;
                    }
                    i++;
                    R = next(R);
                }
                cout << endl;
                P = next(P);
            }
        }

        cout << "Data jalan di kota " << info(P).nama << " : " << endl;
        if (first(LR) == NULL) {
            cout << "Tidak ada data!" << endl;
        } else {
            adrRelasi R = first(LR);
            int i = 1;
            while (R != NULL) {
                if(parent(R) == P){
                    cout << i << ". " << info(child(R)).nama << " (" << info(child(R)).jenis << ")" << endl;
                }
                i++;
                R = next(R);
            }
            cout << endl;
        }
    }
}

void showParentKurangPembangunan(listParent LP, listRelasi LR){
    int min = 99999;
    string nama = "";

    if(first(LP) != NULL && first(LR) != NULL) {
        adrParent PP = first(LP);
        int cout = 0;
        while(next(PP) != first(LP)) {
            adrRelasi PR = first(LR);
            while(next(PR) != NULL){
                if(parent(PR) == PP){
                    cout++;
                }
                PR = next(PR);
            }

            if(cout < min){
                nama = info(PP).nama;
            }
            PP = next(PP);
        }

        adrRelasi PR = first(LR);
        while(next(PR) != NULL){
            if(parent(PR) == PP){
                cout++;
            }
            PR = next(PR);
        }

        if(cout < min){
            nama = info(PP).nama;
        }
    }

    if(nama != "") {
        cout << "Kota dengan sedikit pembangunan adalah " << nama << endl;
    } else {
        cout << "Belum ada data" << endl;
    }
}

int hitungParentByNamaChild(listRelasi L, string X){
    int count = 0;
    adrRelasi P = first(L);
    while(P != NULL){
        if(info(child(P)).nama == X){
            count++;
        }
        P = next(P);
    }
    return count;
}
