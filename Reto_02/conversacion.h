#ifndef CONVERSACION_H
#define CONVERSACION_H

#include <vector>
#include "mensaje.h"

using namespace std;

class Conversacion {
private:
    vector<Mensaje> mensajes;

public:
    void agregarMensaje(Mensaje m);
    void guardarJSON(string ruta);
};

#endif