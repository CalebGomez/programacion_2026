#include "conversacion.h"
#include <fstream>
using namespace std;

void Conversacion::agregarMensaje(Mensaje m) {
    mensajes.push_back(m);
}

void Conversacion::guardarJSON(string ruta) {
    ofstream archivo(ruta);

    archivo << "{ \"conversacion\": [\n";

    for (int i = 0; i < mensajes.size(); i++) {
        archivo << mensajes[i].toJSON();
        if (i != mensajes.size() - 1) {
            archivo << ",";
        }
        archivo << "\n";
    }

    archivo << "] }";
    archivo.close();
}
