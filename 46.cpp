#include <iostream>
#include <vector>
#include <string>

using namespace std;

int index_paraula(vector<string> llista, string paraula) {

    for (int i = 0; i < llista.size(); i++) {
        if (llista[i] == paraula) {
            return i;
        }
    }

    return -1;
}

int main() {

    vector<string> llista;
    string paraula;
    int n;

    cout << "Quantes paraules vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix una paraula: ";
        cin >> paraula;
        llista.push_back(paraula);
    }

    cout << "Quina paraula vols cercar? ";
    cin >> paraula;

    int posicio = index_paraula(llista, paraula);

    if (posicio != -1) {
        cout << "La paraula es troba a l'index: " << posicio << endl;
    } else {
        cout << "La paraula no es troba a la llista." << endl;
    }

    return 0;
}