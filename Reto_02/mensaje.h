#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>

using namespace std;

class Mensaje {
private:
    string contenido;
    string emisor;
    string fechahora;

public:
    Mensaje(string contenido, string emisor, string fechahora);

    string obtenerContenido();
    string obtenerEmisor();
    string obtenerFechahora();

    string toJSON();
};

#endif
