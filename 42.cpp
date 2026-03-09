#include <iostream>
#include <vector>

using namespace std;

bool hi_ha_duplicats(vector<int> llista) {

    for (int i = 0; i < llista.size(); i++) {
        for (int j = i + 1; j < llista.size(); j++) {
            if (llista[i] == llista[j]) {
                return true;
            }
        }
    }

    return false;
}

int main() {

    vector<int> llista;
    int n, valor;

    cout << "Quants numeros vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un numero: ";
        cin >> valor;
        llista.push_back(valor);
    }

    if (hi_ha_duplicats(llista)) {
        cout << "La llista te elements duplicats." << endl;
    } else {
        cout << "La llista no te elements duplicats." << endl;
    }

    return 0;
}