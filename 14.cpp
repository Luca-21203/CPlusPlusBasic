#include <iostream>
#include <string>

using namespace std;

bool es_palindrom(string paraula) {

    int inici = 0;
    int fi = paraula.length() - 1;

    while (inici < fi) {
        if (paraula[inici] != paraula[fi]) {
            return false;
        }
        inici++;
        fi--;
    }

    return true;
}

int main() {

    string text;

    cout << "Escriu una paraula: ";
    cin >> text;

    if (es_palindrom(text)) {
        cout << "Es un palindrom" << endl;
    } else {
        cout << "No es un palindrom" << endl;
    }

    return 0;
}