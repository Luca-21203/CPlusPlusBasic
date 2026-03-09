#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

vector<string> crear_llista_fitxer(string nom_fitxer) {

    vector<string> llista;
    ifstream fitxer(nom_fitxer);
    string paraula;

    if (fitxer.is_open()) {

        while (fitxer >> paraula) {
            llista.push_back(paraula);
        }

        fitxer.close();
    }
    else {
        cout << "No s'ha pogut obrir el fitxer." << endl;
    }

    return llista;
}

int main() {

    vector<string> llista;
    string nom_fitxer;

    cout << "Introdueix el nom del fitxer: ";
    cin >> nom_fitxer;

    llista = crear_llista_fitxer(nom_fitxer);

    cout << "Paraules llegides:" << endl;

    for (int i = 0; i < llista.size(); i++) {
        cout << llista[i] << endl;
    }

    return 0;
}                                                       