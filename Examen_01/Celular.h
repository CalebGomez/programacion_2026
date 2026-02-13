#ifndef CELULAR_H
#define CELULAR_H

#include <string>
using namespace std;

class Celular {
    private:
        string marca;
        float precio;
        int almacenamiento;
        string modelo;
        string color;

public:
    Celular();
    Celular(string marca, float precio, int almacenamiento, string modelo, string color);

    void actualizarMarca(string nuevaMarca);
    void actualizarPrecio(float nuevoPrecio);
    void actualizarAlmacenamiento(int nuevoAlmacenamiento);
    void actualizarModelo(string nuevoModelo);
    void actualizarColor(string nuevoColor);

    string obtenerMarca();
    float obtenerPrecio();
    int obtenerAlmacenamiento();
    string obtenerModelo();
    string obtenerColor();

    void mostrarMarca();
    void mostrarPrecio();
    void mostrarAlmacenamiento();
    void mostrarModelo();
    void mostrarColor();
    void mostrarInformacionCompleta();

};

#endif