#include "Celular.h"
#include <iostream>

using namespace std;

Celular::Celular() {
    marca = "";
    precio = 0.0;
    almacenamiento = 0;
    modelo = "";
    color = "";

}

Celular::Celular(string marca, float precio, int almacenamiento, string modelo, string color) {
    this->marca = marca;
    this->precio = precio;
    this->almacenamiento = almacenamiento;
    this->modelo = modelo;
    this ->color = color;
}

void Celular::actualizarMarca(string nuevaMarca){
    marca = nuevaMarca;
}

void Celular::actualizarPrecio(float nuevoPrecio){
    precio = nuevoPrecio;
}

void Celular::actualizarAlmacenamiento(int nuevoAlmacenamiento){
    almacenamiento = nuevoAlmacenamiento;
}

void Celular::actualizarModelo(string nuevoModelo){
    modelo = nuevoModelo;
}

void Celular::actualizarColor(string nuevoColor){
    color = nuevoColor;
}

string Celular::obtenerMarca(){
    return marca;
}

float Celular::obtenerPrecio(){
    return precio;
}

int Celular::obtenerAlmacenamiento(){
    return almacenamiento;
}

string Celular::obtenerModelo(){
    return modelo;
}

string Celular::obtenerColor(){
    return color;
}

void Celular::mostrarMarca(){
    cout << "Marca: "<< marca << endl;
}

void Celular::mostrarPrecio(){
    cout << "Precio:$ "<< precio << endl;
}

void Celular::mostrarAlmacenamiento(){
    cout << "Almacenamiento: "<< almacenamiento << "GB"<< endl;
}

void Celular::mostrarModelo(){
    cout << "Modelo: "<< modelo << endl;
}

void Celular::mostrarColor(){
    cout << "Color: "<< color << endl;
}

void Celular::mostrarInformacionCompleta(){
    mostrarMarca();
    mostrarPrecio();
    mostrarAlmacenamiento();
    mostrarModelo();
    mostrarColor();
}
