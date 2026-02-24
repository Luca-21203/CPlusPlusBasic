#include <iostream>
using namespace std;


bool esVocal(char c) {
    
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char lletra;

    cout << "Introdueix un caracter: ";
    cin >> lletra;

    if (esVocal(lletra)) {
        cout << "Es una vocal" << endl;
    } else {
        cout << "No es una vocal" << endl;
    }

    cout << "\nProves:" << endl;
    cout << "a -> " << esVocal('a') << endl;
    cout << "E -> " << esVocal('E') << endl;
    cout << "x -> " << esVocal('x') << endl;
    cout << "U -> " << esVocal('U') << endl;
    cout << "b -> " << esVocal('b') << endl;

    return 0;
}
