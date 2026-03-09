#include <iostream>
#include <vector>

using namespace std;

vector<int> eliminarcapicua(vector<int> llista) {

    vector<int> nova;

    for (int i = 1; i < llista.size() - 1; i++) {
        nova.push_back(llista[i]);
    }

    return nova;
}

int main() {

    vector<int> llista;
    vector<int> resultat;
    int n, valor;

    cout << "Quants numeros vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un numero: ";
        cin >> valor;
        llista.push_back(valor);
    }

    resultat = eliminarcapicua(llista);

    cout << "Nova llista: ";

    for (int i = 0; i < resultat.size(); i++) {
        cout << resultat[i] << " ";
    }

    cout << endl;

    return 0;
}