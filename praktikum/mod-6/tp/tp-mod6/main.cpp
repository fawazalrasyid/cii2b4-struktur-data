#include "DLL.h"
#include <iostream>

using namespace std;

int main() {
    int pilihan = 0;
    List L;
    adr P;

    createList_1301213016(L);

    pilihan = selectMenu_1301213016();

    while (pilihan != 0) {
        switch(pilihan) {
        case 1: {
            int i;
            int jumlah;
            infotype data;

            i = 0;

            cout << "Jumlah data yang akan ditambahkan: ";
            cin >> jumlah;

            while (i < jumlah) {
                cout << "ID: ";
                cin >> data.id;

                cout << "Judul: ";
                cin >> data.judul;

                cout << "Penulis: ";
                cin >> data.penulis;

                cout << endl;

                P = newElement_1301213016(data);
                insertFirst_1301213016(L, P);

                i++;
            }

            break;
        }
        case 2:
            show_1301213016(L);

            break;
        case 3:
            adr Z = IDMax_1301213016(L);

            cout << "ID: " << info(Z).id << endl;
            cout << "Judul: " << info(Z).judul << endl;
            cout << "Penulis: " << info(Z).penulis << endl;

            cout << endl;

            break;
        }

        char kembali;
        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> kembali;
        cout << endl;

        if (kembali == 'Y') {
            pilihan = selectMenu_1301213016();
        } else {
            pilihan = 0;
        }


    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;

    return 0;
}
