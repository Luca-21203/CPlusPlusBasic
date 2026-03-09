#include <iostream>
#include <vector>

using namespace std;

vector<int> elimina_duplicats(vector<int> llista) {

    vector<int> nova;

    for (int i = 0; i < llista.size(); i++) {

        bool duplicat = false;

        for (int j = 0; j < nova.size(); j++) {
            if (llista[i] == nova[j]) {
                duplicat = true;
            }
        }

        if (!duplicat) {
            nova.push_back(llista[i]);
        }
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

    resultat = elimina_duplicats(llista);

    cout << "Llista sense duplicats: ";

    for (int i = 0; i < resultat.size(); i++) {
        cout << resultat[i] << " ";
    }

    cout << endl;

    return 0;
}