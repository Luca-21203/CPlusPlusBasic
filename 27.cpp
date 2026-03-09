#include <iostream>
#include <vector>
#include <string>

using namespace std;

int nums_que_comencen_per(vector<string> noms, char lletra) {

    int comptador = 0;

    for (int i = 0; i < noms.size(); i++) {
        if (noms[i][0] == lletra) {
            comptador++;
        }
    }

    return comptador;
}

int main() {

    vector<string> noms;
    int n;
    string nom;
    char lletra;

    cout << "Quants noms vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un nom: ";
        cin >> nom;
        noms.push_back(nom);
    }

    cout << "Introdueix la lletra: ";
    cin >> lletra;

    cout << "Noms que comencen per '" << lletra << "': "
         << nums_que_comencen_per(noms, lletra) << endl;

    return 0;
}