#include <iostream>

#include "flight.h"

using namespace std;

int main()
{
    infotype X;
    listJadwal L;
    adrJadwalP P;

    createListJadwal_1301213016(L);
    int n;
    int i = 0;

    cout << "Banyak Jadwal : ";
    cin >> n;
    cout << endl;

    while (i < n) {
        cout << "Kode Penerbangan : "; cin >> X.kode;
        cout << "Jenis Pesawat : "; cin >> X.jenis;
        cout << "Tanggal : "; cin >> X.tanggal;
        cout << "Waktu Keberangkatan : "; cin >> X.waktu;
        cout << "Asal : "; cin >> X.asal;
        cout << "Tujuan : "; cin >> X.tujuan;
        cout << "Kapasitas : "; cin >> X.kapasitas;
        cout << endl;
        P = createElemenJadwal_1301213016(X);
        insertLastJ_1301213016(L, P);
        i++;
    }

    cout << "List hasil inputan : " << endl;
    showJadwal_1301213016(L);

    deleteFirstJ_1301213016(L, P);
    cout << "List setelah data terakhir dihapus : " << endl;
    showJadwal_1301213016(L);

    cout << "Hasil pencarian : " << endl;
    P = searchJ_1301213016(L, "Surabaya", "Malang", "09/12/2022");
    if (P != NULL) {
        cout << "Jadwal Ditemukan\n" << endl;
        cout << "Kode Penerbangan : " << info(P).kode << endl;
        cout << "Jenis Pesawat : " << info(P).jenis << endl;
        cout << "Tanggal : " << info(P).tanggal << endl;
        cout << "Waktu : " << info(P).waktu << endl;
        cout << "Asal : " << info(P).asal << endl;
        cout << "Tujuan : " << info(P).tujuan << endl;
        cout << "Kapasitas : " << info(P).kapasitas << endl;
        cout << endl;
    } else {
        cout << "Jadwal Tidak Ditemukan" << endl;
    }

    return 0;
}
