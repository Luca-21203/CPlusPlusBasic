#include <iostream>

using namespace std;

int main() {

    int num;
    int digits = 0;

    cout << "Introdueix un numero (1 - 900000): ";
    cin >> num;

    while (num < 1 || num > 900000) {
        cout << "Numero fora de rang. Torna a introduir: ";
        cin >> num;
    }

    int temp = num;

    while (temp > 0) {
        temp = temp / 10;
        digits++;
    }

    cout << "El numero te " << digits << " digits." << endl;

    return 0;
}