#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

map<string, int> llista_a_diccionari(vector<string> llista) {

    map<string, int> diccionari;

    for (int i = 0; i < llista.size(); i++) {
        diccionari[llista[i]] = i;
    }

    return diccionari;
}

int main() {

    vector<string> llista = {"casa", "cotxe", "cadira", "taula"};
    map<string, int> resultat;

    resultat = llista_a_diccionari(llista);

    cout << "Diccionari:" << endl;

    for (auto element : resultat) {
        cout << element.first << " : " << element.second << endl;
    }

    return 0;
}