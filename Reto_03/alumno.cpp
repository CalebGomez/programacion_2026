#include "alumno.h"
#include <iostream>

using namespace std;

Alumno::Alumno(string nombre, int edad, float notafinal) : Persona(nombre,edad) {
    this->notafinal = notafinal;
}

void Alumno::mostrar(){
    Persona::mostrar();
    cout<<"Nota Final: "<<notafinal<<endl;
}