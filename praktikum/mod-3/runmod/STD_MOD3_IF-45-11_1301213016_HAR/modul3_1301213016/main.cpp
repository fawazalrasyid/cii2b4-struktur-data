#include "lemari.h"
#include <iostream>

using namespace std;

int main(){

    //Inisiasi Variabel
    lemari lem;
    lem.maks = 8;
    lem.no_laci = -1;
    int i;

    //Menambahkan data & Output
    tambahData(lem, 6);
    lihatData(lem);

    tambahData(lem, 4);
    lihatData(lem);

    tambahData(lem, 0);
    lihatData(lem);

    tambahData(lem, 2);
    lihatData(lem);

    cout<<endl;

    reversed_view(lem);
    tambahData(lem, 0);
    reversed_view(lem);

    cout<<endl;

    lihatData(lem);
    delete_data(lem);
    lihatData(lem);

    cout<<endl;

    //mencari index int i;
    i = cariData(lem, 8);
    cout<<i<<endl;
    i = cariData(lem, 6);
    cout<<i<<endl;

    return 0;
}
