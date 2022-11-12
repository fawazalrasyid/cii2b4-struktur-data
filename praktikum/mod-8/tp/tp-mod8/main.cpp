#include "CSLL.h"
#include <iostream>

using namespace std;

int main()
{
    listLagu L;
    adr pLagu;

    createList_1301213016(L);

    infotype data;

    data.artis = "LE SSERAFIM";
    data.judul = "Good Parst";
    data.genre = "Kpop";
    data.playtime = 78;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "The Weekend";
    data.judul = "After Hours";
    data.genre = "Pop";
    data.playtime = 61;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "LE SSERAFIM";
    data.judul = "ANTIFRAGILE";
    data.genre = "Kpop";
    data.playtime = 60;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "DAY6";
    data.judul = "Congratulation";
    data.genre = "Korean Rock";
    data.playtime = 58;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "NewJeans";
    data.judul = "Attention";
    data.genre = "Kpop";
    data.playtime = 57;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Juicy Luicy";
    data.judul = "Mawar Jingga";
    data.genre = "Pop";
    data.playtime = 43;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Hivi!";
    data.judul = "Remaja";
    data.genre = "Pop";
    data.playtime = 38;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "NewJeans";
    data.judul = "Hype Boy";
    data.genre = "Kpop";
    data.playtime = 37;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Sheila On 7";
    data.judul = "Dan...";
    data.genre = "Pop";
    data.playtime = 36;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Tulus";
    data.judul = "Sewindu";
    data.genre = "Pop";
    data.playtime = 34;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Tulus";
    data.judul = "Labirin";
    data.genre = "Pop";
    data.playtime = 32;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "NMIXX";
    data.judul = "DICE";
    data.genre = "Kpop";
    data.playtime = 30;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Juicy Luicy";
    data.judul = "Lantas";
    data.genre = "Pop";
    data.playtime = 29;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "LE SSERAFIM";
    data.judul = "Blue Flame";
    data.genre = "Kpop";
    data.playtime = 29;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Yovie Widianto, Tulus, Glenn Fredly";
    data.judul = "Adu Rayu";
    data.genre = "Pop";
    data.playtime = 27;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "Utha Likumahuwa";
    data.judul = "Sesaat Kau Hadir";
    data.genre = "Jazz";
    data.playtime = 24;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);

    data.artis = "DPR LIVE";
    data.judul = "Jasmine";
    data.genre = "Hip-hop";
    data.playtime = 21;
    createElemen_1301213016(data, pLagu);
    insertLast_1301213016(L, pLagu);


    cout << "menampilkan semua element list" << endl;
    showSemuaLagu_1301213016(L);

    deleteFirst_1301213016(L, pLagu);

    cout << "menampilkan semua element list setelah element pertama dihapus" << endl;
    showSemuaLagu_1301213016(L);

    return 0;
}
