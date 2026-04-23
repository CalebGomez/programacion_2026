#include "persona.h"
#include <iostream>

using namespace std;


Persona::Persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}

void Persona::mostrar(){
    cout<<"Nombre: " <<nombre <<endl;
    cout<<"Edad: "<<edad <<endl;
}
