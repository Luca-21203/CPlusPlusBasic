#include <iostream>
#include <vector>

using namespace std;

int Passar_a_Numero(vector<int> llista) {

    int numero = 0;

    for (int i = 0; i < llista.size(); i++) {
        numero = numero * 10 + llista[i];
    }

    return numero;
}

int main() {

    vector<int> llista;
    int n, digit;

    cout << "Quants digits vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un digit: ";
        cin >> digit;
        llista.push_back(digit);
    }

    cout << "El numero format es: " << Passar_a_Numero(llista) << endl;

    return 0;
}