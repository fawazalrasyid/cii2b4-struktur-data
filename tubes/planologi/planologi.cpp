void createListJalan(listJalan &L) {
    first(L) = NULL;
}

void insertFirstJalan(listJalan &L, adrJalan P){
    next(P) = first(L);
    first(L) = P;
}

void insertAfter(listJalan &L, adrJalan P, adrJalan prec){
    next(P) = next(prec);
    next(prec) = P;
}

void insertLastJalan(listJalan &L, adrJalan P){
    if(first(L) == NULL){
        insertFirstJalan(L,P);
    } else {
        adrJalan Q = first(L);
        while(next(Q) != NULL){
            Q = next(Q);
        }
        insertAfter(L,P,Q);
    }
}

adrJalan createNewElmJalan(infotypeJalan X){
    adrJalan P = new elmJalan;
    info(P) = X;
    next(P) = NULL;
    return P;
}