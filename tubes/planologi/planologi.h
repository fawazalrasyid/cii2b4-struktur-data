#ifndef PLANOLOGI_H_INCLUDED
#define PLANOLOGI_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define parent(P) (P)->parent
#define child(P) (P)->child
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef struct elmParent *adrParent;
typedef struct elmChild *adrChild;
typedef struct elmRelasi *adrRelasi;

struct infotypeParent {
    string nama;
    int jumlahJalan;
};

struct elmParent {
    infotypeParent info;
    adrParent next;
};

struct listParent {
    adrParent first, last;
};

struct infotypeChild {
    string nama, jenis;
};

struct elmChild {
    infotypeChild info;
    adrChild next, prev;
};

struct listChild {
    adrChild first, last;
};

struct elmRelasi {
    adrParent parent;
    adrChild child;
    adrRelasi next;
};

struct listRelasi {
    adrRelasi first, last;
};

void createListParent(listParent &L);
adrParent createNewElmParent(infotypeParent X);
void insertFirstParent(listParent &L, adrParent P);
void insertAfterParent(listParent &L, adrParent P, adrParent Prec);
void insertLastParent(listParent &L, adrParent P);
void insertParent(listParent &L, adrParent P);
void deleteFirstParent(listParent &L);
void deleteAfterParent(listParent &L, adrParent Prec);
void deleteLastParent(listParent &L);
void deleteParent(listParent &L, listRelasi &LR, string X);
void showParent(listParent L);
adrParent searchParent(listParent L, string X);

void createListChild(listChild &L);
adrChild createNewElmChild(infotypeChild X);
void insertFirstChild(listChild &L, adrChild P);
void insertAfterChild(listChild &L, adrChild P, adrParent Prec);
void insertLastChild(listChild &L, adrChild P);
void insertChild(listChild &L, adrChild P);
void deleteFirstChild(listChild &L);
void deleteAfterChild(listChild &L, adrChild Prec);
void deleteLastChild(listChild &L);
void deleteChild(listChild &L, listRelasi &LR, string X);
void showChild(listChild L);
adrChild searchChild(listChild L, string X);

void createListRelasi(listRelasi &L);
adrRelasi createNewElmRelasi(adrParent PP, adrChild PC);
void insertFirstRelasi(listRelasi &L, adrRelasi P);
void insertAfterRelasi(listRelasi &L, adrRelasi P, adrParent Prec);
void insertLastRelasi(listRelasi &L, adrRelasi P);
void deleteFirstRelasi(listRelasi &L);
void deleteAfterRelasi(listRelasi &L, adrRelasi Prec);
void deleteLastRelasi(listRelasi &L);
void deleteRelasi(listRelasi &L, adrParent Parent, adrChild Child);
void showRelasi(listRelasi L);
adrRelasi searchRelasi(listRelasi L, adrParent Parent, adrChild Child);
adrRelasi searchRelasiByParent(listRelasi L, adrParent Parent);
adrRelasi searchRelasiByChild(listRelasi L, adrChild Child);

void showParentWithChild(listParent LP, listRelasi LR);
void showParentKurangPembangunan(listParent LP, listRelasi LR);
int hitungParentByNamaChild(listRelasi L, string X);
void showJumlahJalanPadaKota(listParent LP, listRelasi LR);

#endif // PLANOLOGI_H_INCLUDED
