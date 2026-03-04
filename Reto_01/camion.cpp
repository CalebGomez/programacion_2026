#include "camion.h"
#include <iostream>

using namespace std;

// Constructor por defecto: llama al constructor por defecto de Vehiculo
Camion::Camion() : Vehiculo() {
    capacidad = 0.0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Camion::Camion(string marca, string modelo, int anio, string placa, float capacidad)
    : Vehiculo(marca, modelo, anio, placa) {
    this->capacidad = capacidad;
}

// Método para actualizar
void Camion::actualizarCapacidad(float nuevaCapacidad) {
    capacidad = nuevaCapacidad;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche
void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Capacidad: " << capacidad << endl;
}

// Getter
int Camion::obtenerCapacidad() {
    return capacidad;
}