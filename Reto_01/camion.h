#ifndef CAMION_H
#define CAMION_H

using namespace std;
#include <string>
#include "vehiculo.h"

class Camion : public Vehiculo {
private:
    float capacidad;
    

public:
    // Constructores
    Camion();
    Camion(string marca, string modelo, int anio, string placa, float capacidad );

    // Métodos para actualizar
    void actualizarCapacidad(float nuevaCapacidad);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerCapacidad();
};

#endif