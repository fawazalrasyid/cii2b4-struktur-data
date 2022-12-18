#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    playlistLagu Q;
    adr pLagu;
    infotype lagu;

    createPlaylist_1301213016(Q);

    lagu.artis = "LE SSERAFIM";
    lagu.judul = "Good Part";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "The Weekend";
    lagu.judul = "After Hours";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "LE SSERAFIM";
    lagu.judul = "ANTIFRAGILE";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "DAY6";
    lagu.judul = "Congratulation";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "NewJeans";
    lagu.judul = "Attention";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Juicy Luicy";
    lagu.judul = "Mawar Jingga";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Hivi!";
    lagu.judul = "Remaja";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "NewJeans";
    lagu.judul = "Hype Boy";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Sheila On 7";
    lagu.judul = "Dan...";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Tulus";
    lagu.judul = "Sewindu";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Tulus";
    lagu.judul = "Labirin";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "NMIXX";
    lagu.judul = "DICE";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Juicy Luicy";
    lagu.judul = "Lantas";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "LE SSERAFIM";
    lagu.judul = "Blue Flame";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Yovie Widianto, Tulus, Glenn Fredly";
    lagu.judul = "Adu Rayu";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "Utha Likumahuwa";
    lagu.judul = "Sesaat Kau Hadir";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    lagu.artis = "DPR LIVE";
    lagu.judul = "Jasmine";
    createElement_1301213016(lagu, pLagu);
    enqueue_1301213016(Q, pLagu);

    cout << "Queue Awal" << endl;
    showSemuaLagu_1301213016(Q);

    cout << "\nQueue setelah item dihapus" << endl;
    dequeue_1301213016(Q, pLagu);

    showSemuaLagu_1301213016(Q);

    return 0;
}
