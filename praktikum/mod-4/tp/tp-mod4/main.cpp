#include "SLL.h"

using namespace std;

int main()
{
    // createList
    List FAR;
    cout << "first(FAR) sebelum createList :" << first(FAR) << endl;

    createList_1301213016(FAR);
    cout << "first(FAR) setelah createList :" << first(FAR) << endl;
    cout << endl;

    // newElement
    adr p;
    p = newElement_1301213016('A');
    cout << "Info(P): " << info(p) << endl;
    cout << "Next(P): " << next(p) << endl;
    cout << endl;

    // insertFisrt
    cout << "first(FAR) sebelum insertFirst: " << first(FAR) << endl;
    insertFirst_1301213016(FAR, p);
    cout << "first(FAR) setelah insertFirst: " << first(FAR) << endl;
    cout << "info first(FAR): " << info(first(FAR)) << endl;

    p = newElement_1301213016('B');
    insertFirst_1301213016(FAR, p);
    cout << "info first(FAR): " << info(first(FAR)) << endl;
    cout << endl;

    // show
    show_1301213016(FAR);

    p = newElement_1301213016('C');
    insertFirst_1301213016(FAR, p);
    show_1301213016(FAR);
    cout << endl;

    // deleteLast
    p = deleteLast_1301213016(FAR);
    show_1301213016(FAR);
    cout << info(p) << endl << endl;

    p = deleteLast_1301213016(FAR);
    show_1301213016(FAR);
    cout << info(p) << endl << endl;

    p = deleteLast_1301213016(FAR);
    show_1301213016(FAR);
    cout << info(p) << endl << endl;

    // insertLast
    p = newElement_1301213016('D');
    insertLast_1301213016(FAR, p);
    cout << info(p) << endl;
    show_1301213016(FAR);
    cout << endl;

    p = newElement_1301213016('E');
    insertLast_1301213016(FAR, p);
    cout << info(p) << endl;
    show_1301213016(FAR);
    cout << endl;

    p = newElement_1301213016('F');
    insertLast_1301213016(FAR, p);
    cout << info(p) << endl;
    show_1301213016(FAR);
    cout << endl;

    cout << endl;

    return 0;
}
