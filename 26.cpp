#include <iostream>
#include <vector>
#include <string>

using namespace std;

int nums_que_comencen_per(vector<string> noms) {

    int comptador = 0;

    for (int i = 0; i < noms.size(); i++) {
        if (noms[i][0] == 'a' || noms[i][0] == 'A') {
            comptador++;
        }
    }

    return comptador;
}

int main() {

    vector<string> noms;
    int n;
    string nom;

    cout << "Quants noms vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un nom: ";
        cin >> nom;
        noms.push_back(nom);
    }

    cout << "Noms que comencen per 'a': " << nums_que_comencen_per(noms) << endl;

    return 0;
}