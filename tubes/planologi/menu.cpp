#include "menu.h"

int selectMenu() {
    cout << "====================================MENU====================================" << endl;
    cout << "| 1. Tambah kota                                                           |" << endl;
    cout << "| 2. Tambah jalan                                                          |" << endl;
    cout << "| 3. Cari kota                                                             |" << endl;
    cout << "| 4. Tambah relasi kota dan jalan                                          |" << endl;
    cout << "| 5. Cari jalan                                                            |" << endl;
    cout << "| 6. Hapus kota                                                            |" << endl;
    cout << "| 7. Hapus jalan dari kota                                                 |" << endl;
    cout << "| 8. Tampilkan semua kota beserta jalan nya                                |" << endl;
    cout << "| 9. Hitung banyaknya kota yang memiliki nama jalan tertentu               |" << endl;
    cout << "| 10. Tampilkan kota yang kurang pembangunan                               |" << endl;
    cout << "| 11. Tampilkan semua kota                                                 |" << endl;
    cout << "| 12. Tampilkan semua jalan                                                |" << endl;
    cout << "| 13. Tampilkan jumlah jalan pada setiap kota                              |" << endl;
    cout << "| 0. Exit                                                                  |" << endl;
    cout << "============================================================================" << endl;
    cout << "Pilih menu: ";

    int input = 1;
    cin >> input;

    //cout << endl;

    return input;
}
