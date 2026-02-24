#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    cout << "La longitud de la frase llegida és: " << a.length() << endl;
    return 0;
}