#include <iostream>
#include <string>

using namespace std;

int binari_a_enter(string binari) {

    int resultat = 0;

    for (int i = 0; i < binari.length(); i++) {
        resultat = resultat * 2 + (binari[i] - '0');
    }

    return resultat;
}

int main() {

    string binari;

    cout << "Introdueix un numero binari: ";
    cin >> binari;

    cout << "El numero enter es: " << binari_a_enter(binari) << endl;

    return 0;
}