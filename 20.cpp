#include <iostream>
#include <vector>
#include <string>

using namespace std;

string paraula_mes_llarga(vector<string> llista) {

    string mes_llarga = llista[0];

    for (int i = 1; i < llista.size(); i++) {
        if (llista[i].length() > mes_llarga.length()) {
            mes_llarga = llista[i];
        }
    }

    return mes_llarga;
}

int main() {

    vector<string> llista;
    int n;
    string paraula;

    cout << "Quantes paraules vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix una paraula: ";
        cin >> paraula;
        llista.push_back(paraula);
    }

    cout << "La paraula mes llarga es: " << paraula_mes_llarga(llista) << endl;

    return 0;
}