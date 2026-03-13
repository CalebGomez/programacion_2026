#ifndef CIRCULO_H
#define CIRCULO_H

using namespace std;
#include <string>
#include "figura.h"

class Circulo : public Figura {
    private:
        double radio;

    public:
        Circulo(string nombre, double radio);

        double calcularArea() override;
        
        void describir() override;

        double obtenerRadio();
};



#endif