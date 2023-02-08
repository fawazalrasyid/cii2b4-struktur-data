#include "menu.h"
#include "planologi.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "\n==========================TUGAS BESAR STRUKTUR DATA=========================\n" << endl;
    cout << "Judul\t: Planologi" << endl;
    cout << "Tema\t: Multi Linked-List B " << endl;
    cout << endl;

    cout << "Kelas : IF-45-11 " << endl;
    cout << "Nama Kelompok : " << endl;
    cout << "1. Nama\t: Fawaz Al Rasyid" << endl;
    cout << "   NIM\t: 1301213016" << endl;

    cout << "2. Nama\t: Azhar Amirul Abid" << endl;
    cout << "   NIM\t: 1301213032" << endl;

    cout << "\n===========================================================================\n" << endl;

    cout << endl;

    listParent LP;
    adrParent PP;
    infotypeParent XP;

    listChild LC;
    adrChild PC;
    infotypeChild XC;

    listRelasi LR;
    adrRelasi PR;
    string kota, jalan;

    createListParent(LP);
    createListChild(LC);
    createListRelasi(LR);

    int menu = 0;
    menu = selectMenu();

    while (menu != 0) {
        switch(menu) {
        case 1: {
            cout << "\n=================================Tambah Kota================================\n" << endl;
            int jumlah = 0;
            cout << "Jumlah data kota yang akan ditambah? : "; cin >> jumlah;
            for(int i = 0; i < jumlah; i++){
                cout << "\nData ke-" << i+1 << endl;
                cout << "Nama Kota : "; cin >> XP.nama;
                PP = createNewElmParent(XP);
                insertParent(LP, PP);
                cout << endl;
            }
            cout << "Data kota berhasil ditambah" <<endl;
            cout << "\n===========================================================================\n" << endl;

            break;
        }
        case 2: {
            cout << "\n================================Tambah Jalan===============================\n" << endl;
            int jumlah = 0;
            cout << "Jumlah data jalan yang akan ditambah? : "; cin >> jumlah;
            for(int i = 0; i < jumlah; i++){
                cout << "\nData ke-" << i+1 << endl;
                cout << "Nama Jalan : "; cin >> XC.nama;
                cout << "Jenis Jalan : "; cin >> XC.jenis;
                PC = createNewElmChild(XC);
                insertChild(LC, PC);
                cout << endl;
            }
            cout << "Data jalan berhasil ditambah" <<endl;
            cout << "\n===========================================================================\n" << endl;

            break;
        }
        case 3: {
            cout << "\n=================================Cari Kota=================================\n" << endl;
            cout << "Nama kota yang akan dicari? : "; cin >> kota;
            PP = searchParent(LP, kota);
            if(PP) {
                cout << "\nData kota ditemukan" << endl;
                cout << "Nama Kota : " << info(PP).nama << " " << endl;
            } else {
                cout << "\nData kota tidak ditemukan!" << endl;
            }
            cout << "\n===========================================================================\n" << endl;


            break;
        }
        case 4: {
            cout << "\n===============================Tambah Relasi===============================\n" << endl;
            cout << "Nama Kota : "; cin >> kota;
            cout << "Nama Jalan : "; cin >> jalan;

            PP = searchParent(LP, kota);
            PC = searchChild(LC, jalan);
            if(PP == NULL && PC == NULL){
                cout << "\nData kota dan jalan tidak ditemukan" << endl;
            } else if(PP == NULL) {
                cout << "\nData kota tidak ditemukan" << endl;
            } else if (PC == NULL) {
                cout << "\nData jalan tidak ditemukan" << endl;
            } else {
                PR = createNewElmRelasi(PP, PC);
                insertLastRelasi(LR, PR);
                cout << "\nBerhasil menambahkan relasi kota " << info(PP).nama << " ke jalan " << info(PC).nama << endl;
            }
            cout << "\n===========================================================================\n" << endl;

            break;
        }
        case 5: {
            cout << "\n================================Cari Jalan=================================\n" << endl;
            cout << "Nama jalan yang akan dicari? : "; cin >> jalan;
            PC = searchChild(LC, jalan);
            if(PC) {
                cout << "\nData jalan ditemukan" << endl;
                cout << "Nama Jalan : " << info(PC).nama << endl;
                cout << "Jenis Jalan : " << info(PC).jenis << endl;
            } else {
                cout << "\nData jalan tidak ditemukan!" << endl;
            }
            cout << "\n===========================================================================\n" << endl;

            break;
        }
        case 6: {
            cout << "\n================================Hapus Kota=================================\n" << endl;
            cout << "Nama kota yang akan dihapus? : "; cin >> kota;
            deleteParent(LP, LR, kota);
            cout << "\nData kota berhasil dihapus" << endl;
            cout << "\n===========================================================================\n" << endl;

            break;
        }
        case 7: {
            cout << "\n================================Hapus Jalan=================================\n" << endl;
            cout << "Nama jalan yang akan dihapus? : "; cin >> jalan;
            cout << "Nama kota tempat jalan yang akan dihapus? : "; cin >> kota;

            PP = searchParent(LP, kota);
            PC = searchChild(LC, jalan);

            deleteRelasi(LR, PP, PC);
            cout << "\nData jalan berhasil dihapus" << endl;

            cout << "\n============================================================================\n" << endl;

            break;
        }
        case 8: {
            cout << "\n=======================Tampilkan Kota Beserta Jalan=========================\n" << endl;

            showParentWithChild(LP, LR);

            cout << "\n============================================================================\n" << endl;

            break;
        }
        case 9: {
            cout << "\n============================Hitung Banyak Kota==============================\n" << endl;
            cout << "Nama jalan yang akan dicari? : "; cin >> jalan;

            int jmlKota = hitungParentByNamaChild(LR, jalan);

            if (jmlKota > 0) {
                cout << "\nJumlah kota yang memiliki nama jalan " << jalan << " adalah : " << jmlKota << endl;
            } else {
                cout << "\nTidak ada kota yang memiliki nama jalan " << jalan << endl;
            }


            cout << "\n============================================================================\n" << endl;

            break;
        }
        case 10: {
            cout << "\n=====================Tampilkan Kota Kurang Pembangunan======================\n" << endl;

            showParentKurangPembangunan(LP, LR);

            cout << "\n============================================================================\n" << endl;

            break;
        }
        case 11: {
            cout << "\n=================================Data Kota==================================\n" << endl;

            showParent(LP);

            cout << "\n============================================================================\n" << endl;

            break;
        }
        case 12: {
            cout << "\n================================Data Jalan==================================\n" << endl;

            showChild(LC);

            cout << "\n============================================================================\n" << endl;

            break;
        }
        case 13: {
            cout << "\n================================Jumlah Jalan==================================\n" << endl;

            showJumlahJalanPadaKota(LP, LR);

            cout << "\n============================================================================\n" << endl;

            break;
        }
        }

        char kembali;
        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> kembali;
        cout << endl;

        if (kembali == 'Y' || kembali == 'y') {
            menu = selectMenu();
        } else {
            menu = 0;
        }

    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;

    return 0;
}

