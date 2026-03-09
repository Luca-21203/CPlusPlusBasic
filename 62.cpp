#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    vector<int> llista;
    int potencia;

    cout << "Introdueix la potencia: ";
    cin >> potencia;

    for (int i = 0; i < 10; i++) {
        llista.push_back(pow(i, potencia));
    }

    cout << "Resultat: ";

    for (int i = 0; i < llista.size(); i++) {
        cout << llista[i] << " ";
    }

    cout << endl;

    return 0;
}