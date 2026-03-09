#include <iostream>

using namespace std;

double dividir(double a, double b) {

    if (b == 0) {
        cout << "Error: estas intentant dividir per zero!" << endl;
        return 0;
    }

    return a / b;
}

int main() {

    double num1, num2;

    cout << "Introdueix el primer numero: ";
    cin >> num1;

    cout << "Introdueix el segon numero: ";
    cin >> num2;

    double resultat = dividir(num1, num2);

    if (num2 != 0) {
        cout << "Resultat de la divisio: " << resultat << endl;
    }

    return 0;
}