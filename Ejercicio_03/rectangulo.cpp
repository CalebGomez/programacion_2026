#include "rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(string nombre, double base, double altura) : Figura(nombre) {
    this->base = base;
    this->altura = altura;
}

double Rectangulo::calcularArea(){
    return base * altura;
}

void Rectangulo::describir(){
    cout << "Figura: " << nombre <<endl; 
    cout <<"Base: " << base <<endl; 
    cout <<"Altura: "<< altura << endl;
}

double Rectangulo::obtenerBase(){
    return base;
}

double Rectangulo::obtenerAltura(){
    return altura;
}