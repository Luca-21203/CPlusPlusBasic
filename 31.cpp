#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int codi[4];
    int intent[4];
    int encertats, coincideixen;

    // Generar codi secret
    for (int i = 0; i < 4; i++) {
        codi[i] = rand() % 10;
    }

    cout << "Joc MasterMind simplificat\n";
    cout << "Endevina el codi de 4 xifres.\n";

    do {

        encertats = 0;
        coincideixen = 0;

        cout << "\nIntrodueix 4 xifres: ";

        for (int i = 0; i < 4; i++) {
            cin >> intent[i];
        }

        // Comptar encertats
        for (int i = 0; i < 4; i++) {
            if (intent[i] == codi[i]) {
                encertats++;
            }
        }

        // Comptar coincidències
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (i != j && intent[i] == codi[j]) {
                    coincideixen++;
                }
            }
        }

        cout << "Encertats: " << encertats << endl;
        cout << "Coincideixen: " << coincideixen << endl;

    } while (encertats != 4);

    cout << "Has endevinat el codi!" << endl;

    return 0;
}