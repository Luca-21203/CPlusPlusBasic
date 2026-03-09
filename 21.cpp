#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filtrar_paraules(vector<string> llista, int x) {

    vector<string> resultat;

    for (int i = 0; i < llista.size(); i++) {
        if (llista[i].length() > x) {
            resultat.push_back(llista[i]);
        }
    }

    return resultat;
}

int main() {

    vector<string> llista;
    vector<string> filtrades;
    int n, x;
    string paraula;

    cout << "Quantes paraules vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix una paraula: ";
        cin >> paraula;
        llista.push_back(paraula);
    }

    cout << "Introdueix el numero minim de caracters: ";
    cin >> x;

    filtrades = filtrar_paraules(llista, x);

    cout << "Paraules amb mes de " << x << " caracters:" << endl;

    for (int i = 0; i < filtrades.size(); i++) {
        cout << filtrades[i] << endl;
    }

    return 0;
}