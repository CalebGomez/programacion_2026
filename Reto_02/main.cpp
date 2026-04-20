#include <iostream>
#include <ctime>
#include <filesystem>
#include "conversacion.h"

using namespace std;

string obtenerTiempo() {
    time_t now = time(0);
    char* dt = ctime(&now);
    return string(dt);
}

string generarRuta() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    string carpeta = "logs/" +
        to_string(1900 + ltm->tm_year) + "-" +
        to_string(1 + ltm->tm_mon) + "-" +
        to_string(ltm->tm_mday) + "_" +
        to_string(ltm->tm_hour) + "-" +
        to_string(ltm->tm_min) + "-" +
        to_string(ltm->tm_sec);

    filesystem::create_directories(carpeta);

    return carpeta + "/log.json";
}

int main() {
    Conversacion chat;
    string input;

    cout << "Escribe un mensaje (exit para salir):\n";

    while (true) {
        getline(cin, input);

        if (input == "exit") break;

        Mensaje userMsg(input, "usuario", obtenerTiempo());
        chat.agregarMensaje(userMsg);

        string respuesta = "Chatsitogpt: " + input;
        Mensaje botMsg(respuesta, "sistema", obtenerTiempo());
        chat.agregarMensaje(botMsg);

        cout << respuesta << endl;
    }

    string ruta = generarRuta();

    chat.guardarJSON(ruta);

    cout << "Conversación guardada en: " << ruta << endl;

    return 0;
}