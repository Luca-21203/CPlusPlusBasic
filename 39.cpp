#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Introdueix un numero: ";
    cin >> num;

    int temp = num;

    cout << "Digits parells: ";

    while (temp > 0) {

        int digit = temp % 10;

        if (digit % 2 == 0) {
            cout << digit << " ";
        }

        temp = temp / 10;
    }

    cout << endl;

    return 0;
}