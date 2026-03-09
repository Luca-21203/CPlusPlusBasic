#include <iostream>
#include <vector>

using namespace std;

bool superposicio(vector<int> llista1, vector<int> llista2) {

    for (int i = 0; i < llista1.size(); i++) {
        for (int j = 0; j < llista2.size(); j++) {
            if (llista1[i] == llista2[j]) {
                return true;
            }
        }
    }

    return false;
}

int main() {

    vector<int> llista1, llista2;
    int n1, n2, valor;

    cout << "Quants elements te la primera llista? ";
    cin >> n1;

    for (int i = 0; i < n1; i++) {
        cout << "Introdueix un valor: ";
        cin >> valor;
        llista1.push_back(valor);
    }

    cout << "Quants elements te la segona llista? ";
    cin >> n2;

    for (int i = 0; i < n2; i++) {
        cout << "Introdueix un valor: ";
        cin >> valor;
        llista2.push_back(valor);
    }

    if (superposicio(llista1, llista2)) {
        cout << "Hi ha algun element en comu." << endl;
    } else {
        cout << "No hi ha cap element en comu." << endl;
    }

    return 0;
}