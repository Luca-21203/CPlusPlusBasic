#include <iostream>

using namespace std;

int main() {

    cout << "Numeros parells fins a 100:" << endl;

    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl << endl;

    cout << "Numeros senars fins a 100:" << endl;

    for (int i = 1; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}