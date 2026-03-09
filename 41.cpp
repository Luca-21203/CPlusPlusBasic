#include <iostream>
#include <vector>

using namespace std;

string esta_ordenada(vector<int> llista) {

    bool ascendent = true;
    bool descendent = true;

    for (int i = 0; i < llista.size() - 1; i++) {

        if (llista[i] > llista[i + 1]) {
            ascendent = false;
        }

        if (llista[i] < llista[i + 1]) {
            descendent = false;
        }
    }

    if (ascendent) {
        return "Esta ordenada de forma ascendent.";
    }
    else if (descendent) {
        return "Esta ordenada de forma descendent.";
    }
    else {
        return "No esta ordenada.";
    }
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

    cout << esta_ordenada(llista) << endl;

    return 0;
}