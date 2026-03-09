#include <iostream>
#include <vector>
#include <string>

using namespace std;

void elements_parells(vector<string> llista) {

    for (int i = 0; i < llista.size(); i++) {
        if (i % 2 == 0) {
            cout << llista[i] << endl;
        }
    }

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

    cout << "Paraules en posicio parell:" << endl;

    elements_parells(llista);

    return 0;
}