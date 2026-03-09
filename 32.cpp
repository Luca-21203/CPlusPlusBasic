#include <iostream>
#include <string>

using namespace std;

int main() {

    string paraula1, paraula2;

    cout << "Introdueix la primera paraula: ";
    cin >> paraula1;

    cout << "Introdueix la segona paraula: ";
    cin >> paraula2;

    int len1 = paraula1.length();
    int len2 = paraula2.length();

    if (len1 >= 3 && len2 >= 3 &&
        paraula1.substr(len1 - 3) == paraula2.substr(len2 - 3)) {

        cout << "Les paraules rimen." << endl;

    } else if (len1 >= 2 && len2 >= 2 &&
               paraula1.substr(len1 - 2) == paraula2.substr(len2 - 2)) {

        cout << "Les paraules rimen un poc." << endl;

    } else {

        cout << "Les paraules no rimen." << endl;

    }

    return 0;
}