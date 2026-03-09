#include <iostream>
#include <string>

using namespace std;

int comptar_majuscules(string cadena) {

    int comptador = 0;

    for (int i = 0; i < cadena.length(); i++) {
        if (isupper(cadena[i])) {
            comptador++;
        }
    }

    return comptador;
}

int main() {

    string text;

    cout << "Introdueix una cadena: ";
    getline(cin, text);

    cout << "Nombre de lletres majuscules: " << comptar_majuscules(text) << endl;

    return 0;
}