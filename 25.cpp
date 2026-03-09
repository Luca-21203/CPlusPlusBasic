#include <iostream>
#include <vector>

using namespace std;

void mostrar_majors_que(vector<int> valors, int limit) {

    for (int i = 0; i < valors.size(); i++) {
        if (valors[i] > limit) {
            cout << valors[i] << endl;
        }
    }

}

int main() {

    vector<int> tupla;
    int n, valor;

    cout << "Quants valors vols introduir? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Introdueix un numero: ";
        cin >> valor;
        tupla.push_back(valor);
    }

    cout << "Valors majors que 18:" << endl;

    mostrar_majors_que(tupla, 18);

    return 0;
}