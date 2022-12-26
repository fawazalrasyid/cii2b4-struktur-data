#include <iostream>

#include "graph.h"

using namespace std;

int main()
{
    adr G;
    adr P;

    // tambahkan node A, B, C dan D
    P = newNode_1301213016('A');
    addNode_1301213016(G, P);

    P = newNode_1301213016('B');
    addNode_1301213016(G, P);

    P = newNode_1301213016('C');
    addNode_1301213016(G, P);

    P = newNode_1301213016('D');
    addNode_1301213016(G, P);

    // tambahkan edge pada graph seperti Gambar 1
    addEdge_1301213016(G, 'A', 'C');
    addEdge_1301213016(G, 'A', 'D');
    addEdge_1301213016(G, 'A', 'B');

    addEdge_1301213016(G, 'B', 'A');
    addEdge_1301213016(G, 'B', 'D');

    addEdge_1301213016(G, 'C', 'A');

    addEdge_1301213016(G, 'D', 'B');
    addEdge_1301213016(G, 'D', 'A');

    // tampilkan graph seperti Gambar 3
    printGraph_1301213016(G);

    return 0;
}
