#ifndef FIGURA_H
#define FIGURA_H

using namespace std;
#include <string>

class Figura {
    protected: 
        string nombre;

    public:
        Figura(string nombre);
        virtual ~Figura();

        virtual double calcularArea() = 0;
        virtual void describir() = 0;

        string obtenerNombre();
};



#endif