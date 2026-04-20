#include "mensaje.h"
using namespace std;

Mensaje::Mensaje(string contenido, string emisor, string fechahora) {
    this->contenido = contenido;
    this->emisor = emisor;
    this->fechahora = fechahora;
}

string Mensaje::obtenerContenido() { 
    return contenido; }
string Mensaje::obtenerEmisor() { 
    return emisor; 
}
string Mensaje::obtenerFechahora() { 
    return fechahora; 
}

string Mensaje::toJSON() {
    return "{ \"emisor\": \"" + emisor +
           "\", \"contenido\": \"" + contenido +
           "\", \"Fecha y hora\": \"" + fechahora + "\" }";
}