#include <iostream>

using namespace std;

int main() {

    int num;
    int suma = 0;

    cout << "Introdueix un numero: ";
    cin >> num;

    int temp = num;

    while (temp > 0) {
        suma += temp % 10;
        temp = temp / 10;
    }

    cout << "La suma dels digits es: " << suma << endl;

    if (suma % 2 == 0) {
        cout << "La suma es parell." << endl;
    } else {
        cout << "La suma es senar." << endl;
    }

    return 0;
}