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
                cout << "Norek: ";
                cin >> data.norek;

                cout << "Nama: ";
                cin >> data.nama;

                cout << "Bank: ";
                cin >> data.bank;

                cout << "Saldo: ";
                cin >> data.saldo;

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
            reverseList_1301213016(L);

            show_1301213016(L);

            break;
        case 4:
            double secSmall;

            secSmall = secondSmallest_1301213016(L);

            cout << "Nilai saldo terkcil ke-2: " << secSmall << endl;

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
