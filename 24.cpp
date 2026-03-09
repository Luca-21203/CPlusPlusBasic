#include <iostream>
#include <string>

using namespace std;

int main() {

    int any_actual;
    string nom[4];
    int naixement[4];
    int edat[4];

    cout << "Introdueix l'any actual: ";
    cin >> any_actual;

    for (int i = 0; i < 4; i++) {
        cout << "Nom de la persona: ";
        cin >> nom[i];

        cout << "Any de naixement: ";
        cin >> naixement[i];

        edat[i] = any_actual - naixement[i];
    }

    cout << "\nAny actual " << any_actual << endl;
    cout << "Nom\t\tData naixement\tAnys que fara aquest any" << endl;

    for (int i = 0; i < 4; i++) {
        cout << nom[i] << "\t\t" << naixement[i] << "\t\t" << edat[i] << endl;
    }

    return 0;
}