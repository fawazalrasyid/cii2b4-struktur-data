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

adrRelasi searchRelasi(adrParent Parent, adrChild Child){
    adrRelasi P = first(L);
    while(P != NULL){
        if(parent(P) == Parent && child(P) == Child){
            return P;
        }
        P = next(P);
    }
    return NULL;
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

string showPalingSedikitMuncul(listRelasi L){
    int min = 9999;
    string nama;
    adrRelasi P = first(L);
    while(P != NULL){
        if(hitungParentByNamaChild(L, info(child(P)).nama) < min){
            min = hitungParentByNamaChild(L, info(child(P)).nama);
            nama = info(child(P)).nama;
        }
        P = next(P);
    }
    return nama;
}

void showParentWithChild(listParent LP, listRelasi LR) {
    adrParent P = first(LP);
    while (P != NULL) {
        cout << info(P).nama << " : ";
        adrRelasi R = searchRelasiByParent(LR, P);
        if (R != NULL) {
            cout << info(child(R)).nama;
            R = next(R);
            while (R != NULL) {
                cout << ", " << info(child(R)).nama;
                R = next(R);
            }
        }
        cout << endl;
        P = next(P);
    }
}