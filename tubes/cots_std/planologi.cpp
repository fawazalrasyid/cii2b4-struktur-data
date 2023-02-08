void showJumlahJalanPadaKota(listParent LP, listRelasi LR){
    if(first(LP) != NULL && first(LR) != NULL) {
        adrParent PP = first(LP);
        int count = 0;
        while(next(PP) != first(LP)) {
            adrRelasi PR = first(LR);
            while(next(PR) != NULL){
                if(parent(PR) == PP){
                    count++;
                }
                PR = next(PR);
            }

            cout << "Jumlah Jalan di kota " << info(PP).nama << " adalah : " << count << endl;

            PP = next(PP);
        }

        adrRelasi PR = first(LR);
        while(next(PR) != NULL){
            if(parent(PR) == PP){
                count++;
            }

            PR = next(PR);
        }

        cout << "Jumlah Jalan di kota " << info(PP).nama << " adalah : " << count << endl;
    }
}

void showJumlahJalanPadaKota(listParent LP, listRelasi LR) {
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


void showDariTerbesar(listRelasi LR){
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
