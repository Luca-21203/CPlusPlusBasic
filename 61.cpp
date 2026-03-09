#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> parells;

    for (int i = 1; i <= 10; i++) {
        parells.push_back(i * 2);
    }

    cout << "Primers 10 nombres parells: ";

    for (int i = 0; i < parells.size(); i++) {
        cout << parells[i] << " ";
    }

    cout << endl;

    return 0;
}