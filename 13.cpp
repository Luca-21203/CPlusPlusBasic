#include <iostream>
#include <string>

using namespace std;

string invertir(string cadena) {
    string inversa = "";

    for (int i = cadena.length() - 1; i >= 0; i--) {
        inversa += cadena[i];
    }

    return inversa;
}

int main() {

    string texto;

    cout << "Escriu una cadena: ";
    getline(cin, texto);

    cout << "Cadena invertida: " << invertir(texto) << endl;

    return 0;
}

