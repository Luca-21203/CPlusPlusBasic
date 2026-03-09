#include <iostream>
#include <string>

using namespace std;

void comptar_vocals(string paraula) {

    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; j < paraula.length(); j++) {

        if (paraula[j] == 'a' || paraula[j] == 'A') a++;
        else if (paraula[j] == 'e' || paraula[j] == 'E') e++;
        else if (paraula[j] == 'i' || paraula[j] == 'I') i++;
        else if (paraula[j] == 'o' || paraula[j] == 'O') o++;
        else if (paraula[j] == 'u' || paraula[j] == 'U') u++;

    }

    cout << "Hi ha " << a << " a's, "
         << e << " e's, "
         << i << " i's, "
         << o << " o's i "
         << u << " u's." << endl;
}

int main() {

    string paraula;

    cout << "Introdueix una paraula: ";
    cin >> paraula;

    comptar_vocals(paraula);

    return 0;
}