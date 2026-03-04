#ifndef AUTOBUS_H
#define AUTOBUS_H

using namespace std;
#include <string>
#include "vehiculo.h"

class Autobus : public Vehiculo {
private:
    int asientos;
    

public:
    // Constructores
    Autobus();
    Autobus(string marca, string modelo, int anio, string placa, int asientos );

    // Métodos para actualizar
    void actualizarAsientos(int nuevosAsientos);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerAsientos();
};

#endif