#include <iostream>
#include "figura.h"
#include "circulo.h"
#include "rectangulo.h"

using namespace std;

int main() {

    cout << "=== Sistema de Figuras Geometricas (Polimorfismo) ===" << endl;
    cout << endl;

    Figura* f1 = new Circulo("Circulo", 5.0);
    Figura* f2 = new Rectangulo("Rectangulo", 4.0, 6.0);

    cout << "--- Figura 1 (Circulo) ---" << endl;
    f1->describir();
    cout << "Area: " << f1->calcularArea() << endl;
    cout << endl;

    cout << "--- Figura 2 (Rectangulo) ---" << endl;
    f2->describir();
    cout << "Area: " << f2->calcularArea() << endl;
    cout << endl;

    cout << "--- Tratamiento uniforme con Figura* ---" << endl;

    Figura* figuras[] = {f1, f2};

    for(int i = 0; i < 2; i++) {
        figuras[i]->describir();
        cout << "Area: " << figuras[i]->calcularArea() << endl;
    }

    delete f1;
    delete f2;

    return 0;
}