#include <iostream>
#include <string>

using namespace std;

int main() {
    string nom;
    string cognom;

    cout << "Introdueix el teu nom: ";
    cin >> nom;

    cout << "Introdueix el teu cognom: ";
    cin >> cognom;

    cout << "Hola, " << nom << " " << cognom << endl;

    return 0;
}