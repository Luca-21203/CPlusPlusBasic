#include <iostream>
#include <string>

using namespace std;

string crear_repetits(int n, char c) {

    string resultat = "";

    for (int i = 0; i < n; i++) {
        resultat += c;
    }

    return resultat;
}

int main() {

    int numero;
    char caracter;

    cout << "Introdueix un numero: ";
    cin >> numero;

    cout << "Introdueix un caracter: ";
    cin >> caracter;

    cout << crear_repetits(numero, caracter) << endl;

    return 0;
}