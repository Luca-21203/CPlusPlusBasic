#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> paraula_a_llista(string paraula) {

    vector<char> llista;

    for (int i = 0; i < paraula.length(); i++) {
        llista.push_back(paraula[i]);
    }

    return llista;
}

int main() {

    string paraula;
    vector<char> resultat;

    cout << "Introdueix una paraula: ";
    cin >> paraula;

    resultat = paraula_a_llista(paraula);

    cout << "Llista de lletres: ";

    for (int i = 0; i < resultat.size(); i++) {
        cout << resultat[i] << " ";
    }

    cout << endl;

    return 0;
}