#include "flight.h"

void createListJadwal_1301213016(listJadwal &L) {
    first(L) = NULL;
}

adrJadwalP createElemenJadwal_1301213016(infotype X) {
    adrJadwalP P = new elemenJadwal;
    info(P) = X;
    next(P) = NULL;

    return P;
}

void insertLastJ_1301213016(listJadwal &L, adrJadwalP P) {
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        adrJadwalP Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showJadwal_1301213016(listJadwal L) {
    if(first(L) == NULL){
        cout << "List Kosong!" << endl;
    } else {
        adrJadwalP Q = first(L);
        while(Q != NULL){
            cout << "Kode : " << info(Q).kode << endl;
            cout << "Jenis : " << info(Q).jenis << endl;
            cout << "Tanggal (DD/MM/YY) : " << info(Q).tanggal << endl;
            cout << "Waktu : " << info(Q).waktu << endl;
            cout << "Asal : " << info(Q).asal << endl;
            cout << "Tujuan : " << info(Q).tujuan << endl;
            cout << "Kapasitas : " << info(Q).kapasitas << endl;
            cout << endl;
            Q = next(Q);
        }
    }
}

void deleteFirstJ_1301213016(listJadwal &L, adrJadwalP &P) {
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

adrJadwalP searchJ_1301213016(listJadwal L, string dari, string ke, string tanggal) {
    adrJadwalP P = first(L);
    while (P != NULL) {
        if (info(P).asal == dari && info(P).tujuan == ke && info(P).tanggal == tanggal) {
            return P;
        }
        P = next(P);
    }

    return NULL;
}
