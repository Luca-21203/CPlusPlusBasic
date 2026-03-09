#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double capital_inicial;
    double interes;
    int anys;
    double capital_final;

    // Demanar capital inicial
    do {
        cout << "Introdueix el capital inicial (50000 - 800000): ";
        cin >> capital_inicial;
    } while (capital_inicial < 50000 || capital_inicial > 800000);

    // Demanar interès
    do {
        cout << "Introdueix l'interes anual (0.5 - 13): ";
        cin >> interes;
    } while (interes < 0.5 || interes > 13);

    // Demanar anys
    do {
        cout << "Introdueix el numero d'anys (3 - 40): ";
        cin >> anys;
    } while (anys < 3 || anys > 40);

    // Calcul del capital final
    capital_final = capital_inicial * pow((1 + interes / 100), anys);

    cout << "El capital final sera: " << capital_final << " euros." << endl;

    return 0;
}