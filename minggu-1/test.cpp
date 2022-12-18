void insertFirstCircular(listLagu &L, adr pLagu){
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
        first(L) = pLagu;
    }

}

insertLastCircular(listLagu &L, adr pLagu){
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

deleteFirstCircular(listLagu &L, adr pLagu){
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

deleteLastCircular(listLagu &L, adr pLagu){
    if (first(L) == NULL){
        cout << "List Kosong" << endl;
    } else if (next(first(L)) == first(L)){
        first(L) = NULL;
    } else {
        adr last = first(L);
        while (next(next(last)) != first(L)){
            last = next(last);
        }
        pLagu = next(last);
        next(last) = first(L);
    }
}


