#include "moto.h"
#include <iostream>

using namespace std;

// Constructor por defecto: llama al constructor por defecto de Vehiculo
Moto::Moto() : Vehiculo() {
    cilindros = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Moto::Moto(string marca, string modelo, int anio, string placa, int cilindros)
    : Vehiculo(marca, modelo, anio, placa) {
    this->cilindros = cilindros;
}

// Método para actualizar
void Moto::actualizarCilindros(int nuevosCilindros) {
    cilindros = nuevosCilindros;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche
void Moto::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Cilindros: " << cilindros << endl;
}

// Getter
int Moto::obtenerCilindros() {
    return cilindros;
}