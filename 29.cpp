#include <iostream>

using namespace std;

bool es_de_traspas(int any) {

    if ((any % 4 == 0 && any % 100 != 0) || (any % 400 == 0)) {
        return true;
    } else {
        return false;
    }

}

int main() {

    int any;

    cout << "Introdueix un any: ";
    cin >> any;

    if (es_de_traspas(any)) {
        cout << "Es un any de traspas." << endl;
    } else {
        cout << "No es un any de traspas." << endl;
    }

    return 0;
}