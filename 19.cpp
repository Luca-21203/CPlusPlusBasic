#include <iostream>
#include <vector>

using namespace std;

int gran_llista(vector<int> llista) {

    int maxim = llista[0];

    for (int i = 1; i < llista.size(); i++) {
        if (llista[i] > maxim) {
            maxim = llista[i];
        }
    }

    return maxim;
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

    cout << "El numero mes gran es: " << gran_llista(llista) << endl;

    return 0;
}