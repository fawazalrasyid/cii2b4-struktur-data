#ifndef PLANOLOGI_H_INCLUDED
#define PLANOLOGI_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef struct elmJalan *adrJalan;
typedef struct elmKota *adrKota;
typedef struct elmRelasi *adrRelasi;

struct infotypeJalan {
    string namaJalan, jenis;
};

struct elmJalan {
    infotypeJalan info;
    adrJalan next, prev;
};

struct listJalan {
    adrJalan first, last;
};

struct infotypeKota {
    string namaKota;
};

struct elmKota {
    infotypeKota info;
    adrJalan next;
};

struct listKota {
    adrJalan first, last;
};

struct infotypeRelasi {
    string namaKota;
};

struct elmRelasi {
    infotypeKota info;
    adrJalan next;
};

struct listRelasi {
    adrJalan first, last;
};

void createListJalan(listJalan &L);
void createListKota(listKota &L);
void createListRelasi(listRelasi &L);
adrJalan createNewElmJalan(infotypeJalan X);
adrKota createNewElmKota(infotypeKota X);
adrRelasi createNewElmRelasi(infotypeKota X);
void insertFirstJalan(listJalan &L, adrJalan P);
void insertFirstKota(listKota &L, adrKota P);
void insertFirstRelasi(listRelasi &L, adrRelasi P);
adrJalan searchJalan(listJalan L);
adrKota searchKota(listKota L);
adrJalan searchJalanByKota(listRelasi L);
void deleteLastJalan(listJalan &L);
void deleteLastKota(listKota &L);
void showKota(listKota L);
void showKotaKurangPembangunan(listKota L);
int hitungKotaByNamaJalan(listKota L);

#endif // PLANOLOGI_H_INCLUDED
