#include <iostream>
using namespace std;

int edat(int a) {
    if (a > 18) {    
        cout << "Enhorabona: ets major d'edat ";
    } else if (a < 18) {
        cout << "Enhorabona: ets menor d'edat";
    } else {
        cout << "Enhorabona: tens 18 anys";
    }
    return 0;
}

int main() {
    int x;
    cout << "Escriu la teva edat: ";
    cin >> x;
    edat(x);
    return 0;
}