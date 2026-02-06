#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
    private:
        string nombre;
        int edad;
        string matricula;
        float promedio;
        bool activo;

public:
    Estudiante();
    Estudiante(string nombre, int edad, string matricula, float promedio, bool activo);

//Estos son los setters//

    void actualizarNombre(string nuevoNombre);
    void actualizarEdad(int nuevaEdad);
    void actualizarMatricula(string nuevaMatricula);
    void actualizarPromedio(float nuevoPromedio);
    void actualizarActivo(bool nuevoEstado);

//Estos son los getters//


    string obtenerNombre();
    int obtenerEdad();
    string obtenerMatricula();
    float obtenerPromedio();
    bool obtenerActivo();

//Estos son los metodos de visualizacion//

    void mostrarNombre();
    void mostrarEdad();
    void mostrarMatricula();
    void mostrarPromedio();
    void mostrarActivo();
    void mostrarInformacionCompleta();

//Estos son los metodos de utilidad//

    void incrementarEdad();
    void calcularEstadoAcademico();

};


#endif