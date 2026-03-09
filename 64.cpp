#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void llegir_fitxer(string nom_fitxer) {

    ifstream fitxer(nom_fitxer);
    string linia;

    if (!fitxer.is_open()) {
        cout << "Error: no s'ha pogut obrir el fitxer o no existeix." << endl;
        return;
    }

    cout << "Contingut del fitxer:" << endl;

    while (getline(fitxer, linia)) {
        cout << linia << endl;
    }

    fitxer.close();
}

int main() {

    string nom_fitxer;

    cout << "Introdueix el nom del fitxer: ";
    cin >> nom_fitxer;

    llegir_fitxer(nom_fitxer);

    return 0;
}