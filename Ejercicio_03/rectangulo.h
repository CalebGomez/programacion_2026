#ifndef RECTANGULO_H
#define RECTANGULO_H

using namespace std;
#include <string>
#include "figura.h"

class Rectangulo : public Figura {
    private:
        double base;
        double altura;

    public:
        Rectangulo(string nombre, double base, double altura);

        double calcularArea() override;

        void describir() override;

        double obtenerBase();
        double obtenerAltura();
};

#endif