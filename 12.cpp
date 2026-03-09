#include <iostream>
#include <vector>

using namespace std;

int sumar_llista(vector<int> llista) {
    int suma = 0;

    for (int i = 0; i < llista.size(); i++) {
        suma += llista[i];
    }

    return suma;
}

int multiplicar_llista(vector<int> llista) {
    int producte = 1;

    for (int i = 0; i < llista.size(); i++) {
        producte *= llista[i];
    }

    return producte;
}

int main() {

    vector<int> llista;
    int n, valor;

    cout << "Quants nombres vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un nombre: ";
        cin >> valor;
        llista.push_back(valor);
    }

    cout << "La suma de la llista es: " << sumar_llista(llista) << endl;
    cout << "El producte de la llista es: " << multiplicar_llista(llista) << endl;

    return 0;
}