#include <iostream>

using namespace std;

int main() {

    int num1, num2;
    int suma = 0;

    cout << "Introdueix el primer numero: ";
    cin >> num1;

    cout << "Introdueix el segon numero: ";
    cin >> num2;

    for (int i = num1; i <= num2; i++) {
        suma += i;
    }

    cout << "La suma dels numeros es: " << suma << endl;

    return 0;
}