#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define edge(P) (P)->edge

typedef char infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr edge;
    adr next;
};

adr newNode_1301213016(char x);
void addNode_1301213016(adr &G, adr p);
adr findNode_1301213016(adr G, char x);
void addEdge_1301213016(adr &G, char x, char y);
bool isConnected_1301213016(adr G, char x, char y);
void printGraph_1301213016(adr G);

#endif // GRAPH_H_INCLUDED
