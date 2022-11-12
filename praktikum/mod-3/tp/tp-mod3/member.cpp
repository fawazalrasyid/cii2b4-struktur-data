#include "member.h"
#include <iostream>

using namespace std;

void inputData_1301213016(member &MB) {
    int k;

    cout << "Tuliskan IDNumber: ";
    cin >> MB.IDNumber;

    k = 0;

    while(k < Max) {
        cout << "Poin Bulan Ke- "<<k+1<<": ";
        cin >> MB.Poin[k];

        k++;
    }
}

double ratarata_1301213016(member MB){
    double total;
    double ratarata;

    total = 0;

    for(int i = 0; i < Max; i++){
        total = total + MB.Poin[i];
    };

    ratarata = total / Max;

    return ratarata;
}

void showData_1301213016(member MB) {
    cout << endl;
    cout << "Data Member: "<<endl;
    cout << "IDNumber: "<<MB.IDNumber<<endl;
    cout << "Poin: ";

    for(int i = 0; i < Max; i++){
        cout << MB.Poin[i] << " ";
    };

    cout << endl;
}
