#ifndef PROFESOR_H
#define PROFESOR_H

using namespace std; 
#include "persona.h"
#include <string>

class Profesor : public Persona{
    private:
        string materia;

    public:
        Profesor(string nombre, int edad, string materia);
        void mostrar();
};

#endif