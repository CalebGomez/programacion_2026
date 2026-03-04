#ifndef MOTO_H
#define MOTO_H

using namespace std;
#include <string>
#include "vehiculo.h"

class Moto : public Vehiculo {
private:
    int cilindros;
    

public:
    // Constructores
    Moto();
    Moto(string marca, string modelo, int anio, string placa, int cilindros );

    // Métodos para actualizar
    void actualizarCilindros(int nuevosCilindros);

    // Sobrescritura del método de la clase base
    void mostrarInformacion();

    // Getter
    int obtenerCilindros();
};

#endif