#include "profesor.h"
#include <iostream>

using namespace std;

Profesor::Profesor(string nombre, int edad, string materia) : Persona(nombre,edad) {
    this->materia = materia;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout<< "Materia: "<< materia<< endl;
}
