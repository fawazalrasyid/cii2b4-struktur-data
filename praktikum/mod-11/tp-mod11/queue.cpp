#include "queue.h"

void createPlaylist_1301213016(playlistLagu &Q){
    Q.Head = NULL;
    Q.Tail = NULL;
}

void createElement_1301213016(infotype laguBaru, adr &pLagu) {
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
}

void enqueue_1301213016(playlistLagu &Q, adr &pLagu) {
    if (Q.Head == NULL && Q.Tail == NULL) {
        Q.Head = pLagu;
        Q.Tail = pLagu;
    } else {
        next(pLagu) = Q.Head;
        Q.Head = pLagu;
    }
}

void dequeue_1301213016(playlistLagu &Q, adr pLagu) {
    if (Q.Head == NULL && Q.Tail == NULL) {
       cout << "Queue Kosong!" << endl;
    } else if (next(Q.Head) == NULL) {
        pLagu = Q.Head;
        Q.Head = NULL;
        Q.Tail = NULL;
    } else {
        pLagu = Q.Head;
        Q.Head = next(Q.Head);
        next(pLagu) = NULL;
    }
}

void showSemuaLagu_1301213016(playlistLagu Q){
    adr pLagu;
    int i;

    if (Q.Head == NULL && Q.Tail == NULL) {
        cout << "Queue Kosong!" << endl;
    } else {
        pLagu = Q.Head;
        i = 1;

        while(next(pLagu) != NULL) {
            cout << i << ". Artis: " << info(pLagu).artis << " Judul: " << info(pLagu).judul << endl;
            pLagu = next(pLagu);
            i++;
        }

        cout << i << ". Artis: " << info(pLagu).artis << " Judul: " << info(pLagu).judul << endl;
    }
}
