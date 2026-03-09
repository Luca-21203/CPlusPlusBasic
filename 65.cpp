#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase base abstracta
class Animal {
protected:
    string especie;
    int edat;

public:
    Animal(string e, int ed) {
        especie = e;
        edat = ed;
    }

    virtual void xerrar() = 0;
    virtual void mourem() = 0;

    void quisoc() {
        cout << "Soc un " << especie << " i tenc " << edat << " anys." << endl;
    }
};

// Cavall
class Cavall : public Animal {
public:
    Cavall(int ed) : Animal("Cavall", ed) {}

    void xerrar() { cout << "Hiiii!" << endl; }
    void mourem() { cout << "Galopant..." << endl; }
};

// Dofi
class Dofi : public Animal {
public:
    Dofi(int ed) : Animal("Dofi", ed) {}

    void xerrar() { cout << "Clicks i xiulets" << endl; }
    void mourem() { cout << "Nedant..." << endl; }
};

// Abella
class Abella : public Animal {
public:
    Abella(int ed) : Animal("Abella", ed) {}

    void xerrar() { cout << "Bzzz!" << endl; }
    void mourem() { cout << "Volant..." << endl; }

    void picar() {
        cout << "L'abella pica!" << endl;
    }
};

// Humà
class Huma : public Animal {
protected:
    string nom;

public:
    Huma(string n, int ed) : Animal("Huma", ed) {
        nom = n;
    }

    void xerrar() { cout << "Hola!" << endl; }
    void mourem() { cout << "Caminant..." << endl; }

    void quisoc() {
        cout << "Soc " << nom << " i tenc " << edat << " anys." << endl;
    }
};

// Fiet (subclase de Humà)
class Fiet : public Huma {
private:
    vector<string> pares;

public:
    Fiet(string n, int ed, vector<string> p) : Huma(n, ed) {
        pares = p;
    }

    void nompares() {
        cout << "Els meus pares son: ";
        for (string p : pares) {
            cout << p << " ";
        }
        cout << endl;
    }
};

// Centaure (herencia múltiple)
class Centaure : public Cavall, public Huma {
public:
    Centaure(string n, int ed)
        : Cavall(ed), Huma(n, ed) {}

    void xerrar() { cout << "Soc un centaure!" << endl; }
    void mourem() { cout << "Galopant com un cavall." << endl; }
};

// Clase independiente
class Xou {
public:
    void xerrar() { cout << "Xou parlant..." << endl; }
    void mourem() { cout << "Xou movent-se..." << endl; }
    void quisoc() { cout << "Soc un Xou!" << endl; }
};

int main() {

    vector<Animal*> animals;

    animals.push_back(new Cavall(5));
    animals.push_back(new Dofi(3));
    animals.push_back(new Abella(1));
    animals.push_back(new Huma("Joan", 30));

    vector<string> pares = {"Maria", "Pere"};
    Fiet* f = new Fiet("Toni", 10, pares);
    animals.push_back(f);

    for (Animal* a : animals) {
        a->quisoc();
        a->xerrar();
        a->mourem();
        cout << endl;
    }

    f->nompares();

    Xou x;
    x.quisoc();
    x.xerrar();
    x.mourem();

    return 0;
}