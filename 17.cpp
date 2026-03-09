#include <iostream>
#include <vector>

using namespace std;

void crear_punts(vector<int> llista) {

    for (int i = 0; i < llista.size(); i++) {

        for (int j = 0; j < llista[i]; j++) {
            cout << ".";
        }

        cout << endl;
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

    crear_punts(llista);

    return 0;
}