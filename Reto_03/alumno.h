#ifndef ALUMNO_H
#define ALUMNO_H

using namespace std;
#include <string>
#include "persona.h"

class Alumno : public Persona {
    private: 
        float notafinal;

    public:
        Alumno(string nombre, int edad, float notafinal);
        void mostrar();
};

#endif  