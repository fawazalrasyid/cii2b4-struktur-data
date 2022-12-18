#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

using namespace std;

#define info(pLagu) (pLagu)->info
#define next(pLagu) (pLagu)->next

struct infotype {
    string artis;
    string judul;
};

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct playlistLagu {
    adr Head, Tail;
};

void createPlaylist_1301213016(playlistLagu &Q);
void createElement_1301213016(infotype laguBaru, adr &pLagu);
void enqueue_1301213016(playlistLagu &Q, adr &pLagu);
void dequeue_1301213016(playlistLagu &Q, adr pLagu);
void showSemuaLagu_1301213016(playlistLagu Q);


#endif // QUEUE_H_INCLUDED
