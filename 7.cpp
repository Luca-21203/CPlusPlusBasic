#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string decimalABase(int num, int base) {
    if (num == 0) return "0";

    string digits = "0123456789ABCDEF";
    string resultat = "";
    bool negatiu = false;

    if (num < 0) {
        negatiu = true;
        num = -num;
    }

    while (num > 0) {
        resultat += digits[num % base];
        num /= base;
    }

    if (negatiu) resultat += "-";

    reverse(resultat.begin(), resultat.end());
    return resultat;
}

int baseADecimal(string num, int base) {
    int resultat = 0;
    int potencia = 1;
    bool negatiu = false;

    if (num[0] == '-') {
        negatiu = true;
        num = num.substr(1);
    }

    for (int i = num.length() - 1; i >= 0; i--) {
        char c = toupper(num[i]);
        int valor;

        if (isdigit(c))
            valor = c - '0';
        else
            valor = c - 'A' + 10;

        resultat += valor * potencia;
        potencia *= base;
    }

    return negatiu ? -resultat : resultat;
}

int main() {
    int opcio;

    cout << "1. Calculadora basica\n";
    cout << "2. Canvi de base\n";
    cout << "Escull una opcio: ";
    cin >> opcio;

    if (opcio == 1) {
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
                if (num2 != 0)
                    cout << "Resultat: " << num1 / num2 << endl;
                else
                    cout << "Error: divisio per zero." << endl;
                break;
            default:
                cout << "Operacio no valida." << endl;
        }
    }

    else if (opcio == 2) {
        string numero;
        int baseOrigen, baseDesti;

        cout << "Base origen (2, 8, 10, 16): ";
        cin >> baseOrigen;

        cout << "Introdueix el numero: ";
        cin >> numero;

        cout << "Base desti (2, 8, 10, 16): ";
        cin >> baseDesti;

        int decimal = baseADecimal(numero, baseOrigen);
        string resultat = decimalABase(decimal, baseDesti);

        cout << "Resultat: " << resultat << endl;
    }

    else {
        cout << "Opcio no valida." << endl;
    }

    return 0;
}