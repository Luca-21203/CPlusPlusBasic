#include <iostream>
using namespace std;

// Funcio que retorna el numero mes gran
int gran(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;

    cout << "Introdueix el primer numero: ";
    cin >> x;

    cout << "Introdueix el segon numero: ";
    cin >> y;

    cout << "El numero mes gran es: " << gran(x, y) << endl;

    // Proves addicionals
    cout << "\nProves amb exemples fixes:" << endl;
    cout << "gran(5, 3) = " << gran(5, 3) << endl;
    cout << "gran(10, 20) = " << gran(10, 20) << endl;
    cout << "gran(-4, -2) = " << gran(-4, -2) << endl;
    cout << "gran(7, 7) = " << gran(7, 7) << endl;

    return 0;
}