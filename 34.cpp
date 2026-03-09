#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num;
    int suma = 0;

    cout << "Introdueix un numero menor que 100: ";
    cin >> num;

    while (num >= 100 || num < 0) {
        cout << "El numero ha de ser menor que 100. Torna a provar: ";
        cin >> num;
    }

    for (int i = num - 4; i >= 0; i -= 4) {
        suma += pow(i, 2);
    }

    cout << "La suma dels quadrats es: " << suma << endl;

    return 0;
}