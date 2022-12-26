#include "graph.h"

adr newNode_1301213016(char x) {
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    edge(P) = NULL;

    return P;
}

void addNode_1301213016(adr &G, adr P) {
   if (G == NULL) {
        G = P;
   } else {
       adr Q = G;
       while (next(Q) != NULL) {
            Q = next(Q);
       }
       next(Q) = P;
   }
}

adr findNode_1301213016(adr G, char x) {
    adr Q = G;
    while (Q != NULL) {
        if (info(Q) == x) {
            return Q;
        }
        Q = next(Q);
    }
    return NULL;
}

void addEdge_1301213016(adr &G, char x, char y) {
    adr P, Q, R;
    Q = findNode_1301213016(G,x);
    if (Q == NULL) {
        cout << "Data tidak ditemukan!" << endl;
    } else {
        if (edge(Q) == NULL) {
            P = newNode_1301213016(y);
            edge(Q) = P;
        } else {
            P = newNode_1301213016(y);
            R = edge(Q);
            while (next(R) != NULL) {
                R = next(R);
            }
            next(R) = P;
        }
    }
}

bool isConnected_1301213016(adr G, char x, char y) {
    adr P, Q;
    Q = findNode_1301213016(G,x);
    if (Q == NULL) {
        cout << "Data tidak ditemukan!" << endl;
    } else {
        while (Q != NULL) {
            if (info(Q) == x) {
                return true;
                cout << "check isConnected 2" << endl;
            }
            Q = next(Q);
        }
        return false;
    }

}

void printGraph_1301213016(adr G){
    if (G == NULL) {
        cout << "Graph Kosong!" << endl;
    } else {
        adr Q = G;
        while (Q != NULL) {
            cout << "Node" << info(Q) << " : ";
            adr X = edge(Q);
            while (X != NULL) {
                cout << " - " << info(X);
                X = next(X);
            }
            cout << endl;
            Q = next(Q);
        }
    }
}
