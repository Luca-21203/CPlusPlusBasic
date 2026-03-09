#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filtrar_per_lletra(vector<string> llista, char lletra) {

    vector<string> resultat;

    for (int i = 0; i < llista.size(); i++) {
        if (llista[i][0] == lletra) {
            resultat.push_back(llista[i]);
        }
    }

    return resultat;
}

int main() {

    vector<string> llista;
    vector<string> resultat;
    int n;
    string paraula;
    char lletra;

    cout << "Quantes paraules vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix una paraula: ";
        cin >> paraula;
        llista.push_back(paraula);
    }

    cout << "Introdueix la lletra per filtrar: ";
    cin >> lletra;

    resultat = filtrar_per_lletra(llista, lletra);

    cout << "Paraules que comencen per '" << lletra << "':" << endl;

    for (int i = 0; i < resultat.size(); i++) {
        cout << resultat[i] << endl;
    }

    return 0;
}