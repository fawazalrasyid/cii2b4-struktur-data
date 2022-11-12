#include "CSLL.h"
#include <iostream>

using namespace std;

int main()
{
    listLagu L;
    adr pLagu;

    createList_1301213016(L);

    int i;
    int jumlah;
    infotype data;

    i = 0;

    cout << "Jumlah data yang akan ditambahkan: ";
    cin >> jumlah;
    cout << endl;

    while (i < jumlah) {
        cout << "Artis: ";
        cin >> data.artis;

        cout << "Judul: ";
        cin >> data.judul;

        cout << "Genre: ";
        cin >> data.genre;

        cout << "Playtime: ";
        cin >> data.playtime;

        cout << endl;

        createElemen_1301213016(data, pLagu);
        insertFirst_1301213016(L, pLagu);

        i++;
    }

    showSemuaLagu_1301213016(L);

    return 0;
}
