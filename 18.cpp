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

void dibuixar_imatge() {

    vector<int> forma;
    int n, valor;

    cout << "Quants valors vols per dibuixar la imatge? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un numero: ";
        cin >> valor;
        forma.push_back(valor);
    }

    crear_punts(forma);
}

int main() {

    dibuixar_imatge();

    return 0;
}