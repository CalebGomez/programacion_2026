#include "autobus.h"
#include <iostream>

using namespace std;

// Constructor por defecto: llama al constructor por defecto de Vehiculo
Autobus::Autobus() : Vehiculo() {
    asientos = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Autobus::Autobus(string marca, string modelo, int anio, string placa, int asientos)
    : Vehiculo(marca, modelo, anio, placa) {
    this->asientos = asientos;
}

// Método para actualizar
void Autobus::actualizarAsientos(int nuevosAsientos) {
    asientos = nuevosAsientos;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche
void Autobus::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Asientos: " << asientos << endl;
}

// Getter
int Autobus::obtenerAsientos() {
    return asientos;
}