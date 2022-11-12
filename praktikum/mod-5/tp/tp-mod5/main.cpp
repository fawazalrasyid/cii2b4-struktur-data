#include "header.h"
#include <iostream>

using namespace std;

int main() {
    int pilihan = 0;
    List F;
    adr p;

    // createList
    createList_1301213016(F);

    pilihan = selectMenu_1301213016();

    while (pilihan != 0) {
        switch(pilihan) {
        case 1:
            int i, jumlah;
            char data;

            i = 0;

            cout << "Jumlah data yang akan ditambahkan: ";
            cin >> jumlah;

            while (i < jumlah) {
                cout << "Masukkan data baru: ";
                cin >> data;

                p = newElement_1301213016(data);
                insertLast_1301213016(F, p);

                i++;
            }

            cout << endl;

            break;
        case 2:
            show_1301213016(F);

            cout << endl;
            break;
        case 3:
            double d;
            d = vocalPersentage_1301213016(F);
            cout << "Persentase huruf vokal di dalam list: " << d << "%" << endl;

            cout << endl;
            break;
        case 4:
            int k;

            cout << "Masukka nilai K: ";
            cin >> k;

            showLastK_1301213016(F, k);

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

    cout << endl << "ANDA TELAH KELUAR DARI PROGRAM" << endl;

    return 0;
}
