#include "figura.h"
#include <iostream>

using namespace std;

Figura::Figura(string nombre) {
    this->nombre = nombre;
}

Figura::~Figura(){

}

string Figura::obtenerNombre(){
    return nombre;
}

