#include "lemari.h"
#include <iostream>

using namespace std;

void tambahData(lemari &C, int x){
    if((C.no_laci + 1) != C.maks) {
        C.no_laci += 1;
        C.baju[C.no_laci] = x;
    }
}

void lihatData(lemari C){
    if(C.no_laci != 1) {
        for(int i = 0; i <= C.no_laci; i++) {
            cout<<C.baju[i]<<" ";
        }
    } else {
        cout<<"lemari tidak mempunyai baju"<<endl;
    }

    cout<<endl;
}

int cariData(lemari C, int x) {
   if((C.no_laci + 1) != C.maks) {
        for(int i = 0; i <= C.no_laci; i++) {
            if(C.baju[i] == x) {
                return i;
            } else {
                return -1;
            }
        }
    }
}

void reversed_view(lemari C) {
    int x = nMax;

    if(C.no_laci != -1) {
        for(int i = C.no_laci; i >= 0; i--) {
            cout<<C.baju[i]<<" ";
        }
    }

    cout<<endl;
}

void delete_data(lemari &C) {
    if (C.no_laci != -1) {
        C.no_laci -= 1;
    }
}
