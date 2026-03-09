#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> concatena_llistes(vector<string> llista1, vector<string> llista2, string connector) {

    vector<string> resultat;

    int mida = min(llista1.size(), llista2.size());

    for (int i = 0; i < mida; i++) {
        resultat.push_back(llista1[i] + connector + llista2[i]);
    }

    return resultat;
}

int main() {

    vector<string> llista1 = {"sub", "supra"};
    vector<string> llista2 = {"campio", "campiona"};
    vector<string> resultat;

    resultat = concatena_llistes(llista1, llista2, "-");

    cout << "Resultat:" << endl;

    for (int i = 0; i < resultat.size(); i++) {
        cout << resultat[i] << endl;
    }

    return 0;
}