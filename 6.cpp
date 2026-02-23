#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operacio;

    cout << "Introdueix el primer numero: ";
    cin >> num1;

    cout << "Introdueix l'operacio (+, -, *, /): ";
    cin >> operacio;

    cout << "Introdueix el segon numero: ";
    cin >> num2;

    switch (operacio) {
        case '+':
            cout << "Resultat: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultat: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultat: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultat: " << num1 / num2 << endl;
            } else {
                cout << "Error: no es pot dividir per zero." << endl;
            }
            break;
        default:
            cout << "Operacio no valida." << endl;
    }

    return 0;
}