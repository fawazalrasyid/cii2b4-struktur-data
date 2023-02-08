void printDescending(listRelasi LR){
    adr_relasi P = first(LR);
    if (P != NULL){
        while (next(P) != NULL){
            P = next(P);
        }
        while (P != NULL){
            cout << info(parent(P)).nama << " - " << info(child(P)).nama << endl;
            P = prev(P);
        }
    }
}


void sortListDescending(listRelasi LR){
    listRelasi newLR = LR;

    adr_relasi P = first(newLR);
    adr_relasi Q = next(P);
    while (P != NULL){
        while (Q != NULL){
            if (info(nextBarang(P)).stock < info(nextBarang(P)).stock){
                swap(P,Q);
            }
            Q = next(Q);
        }
        P = next(P);
    }

    if(first(newLR) == NULL){
        cout<<"Tidak ada data!"<<endl;
    }else{
        adr_relasi P = first(L);
        while(next(P) != NULL){
            cout << "   "<< numBarang << ". "<< info(nextBarang(R)).nama_barang << endl;

            P = next(P);
        }

        cout << "   "<< numBarang << ". "<< info(nextBarang(R)).nama_barang << endl;
    }

}

void sortAscendingList(listDokter D) {
    adr_dokter P = first(D);
    adr_dokter Q = next(P);
    while (P != NULL) {
        while (Q != NULL) {
            if (info(P).nama > info(Q).nama) {
                swap(P, Q);
            }
            Q = next(Q);
        }
        P = next(P);
    }
}

void printListDokter(listDokter LD){
    adr_dokter P = first(LD);
    if (P != NULL){
        while (next(P) != NULL){
            P = next(P);
        }
        while (P != NULL){
            cout << info(P).nama << endl;
            P = prev(P);
        }
    }
}