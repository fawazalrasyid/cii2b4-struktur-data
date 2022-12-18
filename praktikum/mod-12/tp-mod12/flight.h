#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct jadwalPenerbangan {
    string kode, jenis, tanggal, waktu, asal, tujuan;
    int kapasitas;
};

typedef struct elemenJadwal *adrJadwalP;
typedef jadwalPenerbangan infotype;

struct elemenJadwal {
    infotype info;
    adrJadwalP next;
};

struct listJadwal {
    adrJadwalP first;
};

void createListJadwal_1301213016(listJadwal &L);
adrJadwalP createElemenJadwal_1301213016(infotype X);
void insertLastJ_1301213016(listJadwal &L, adrJadwalP P);
void showJadwal_1301213016(listJadwal L);
void deleteFirstJ_1301213016(listJadwal &L, adrJadwalP &P);
adrJadwalP searchJ_1301213016(listJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
