#include <iostream>

using namespace std;

int main() {

    int comptador = 0;

    for (int num = 2; num <= 100; num++) {

        bool es_primer = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                es_primer = false;
                break;
            }
        }

        if (es_primer) {
            cout << num << " ";
            comptador++;
        }
    }

    cout << endl;
    cout << "Hi ha " << comptador << " numeros primers entre 1 i 100." << endl;

    return 0;
}   