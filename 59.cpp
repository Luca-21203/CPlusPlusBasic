#include <iostream>
#include <vector>

using namespace std;

int comptar_coincidencies(vector<int> llista) {

    int comptador = 0;

    for (int i = 0; i < llista.size(); i++) {
        if (llista[i] == i) {
            comptador++;
        }
    }

    return comptador;
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

    cout << "Nombre de coincidencies valor-index: "
         << comptar_coincidencies(llista) << endl;

    return 0;
}