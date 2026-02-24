#include <iostream>
using namespace std;

int gran(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

int petit(int a, int b){
    if (a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a, b, c;

    cout << "Introdueixi tres numeros separats per espais: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    int aux = gran(a, gran(b, c));
    int aux2 = petit(a, petit(b, c));

    cout << "El major és: " << aux << " i el més petit és: " << aux2 << endl;

    return 0;
}