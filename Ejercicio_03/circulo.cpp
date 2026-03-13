#include "circulo.h"
#include <iostream>

using namespace std;

Circulo::Circulo(string nombre, double radio) : Figura(nombre) {
    this->radio = radio;
}

double Circulo::calcularArea(){
    return 3.14159 * radio * radio;
}

void Circulo::describir(){
    cout << "Figura: "<< nombre<< endl;
    cout  << "Radio: " << radio << endl;
}

double Circulo::obtenerRadio(){
    return radio;
}