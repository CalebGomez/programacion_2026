#include <iostream>
#include "Estudiante.h"

using namespace std;

int main(){
    cout << "=== Sistema de Gestión de Estudiante ===" << endl;

    Estudiante estudiante1;
    estudiante1.mostrarInformacionCompleta();
    cout << endl;

    estudiante1.actualizarNombre("Caleb Gomez");
    estudiante1.actualizarEdad(22);
    estudiante1.actualizarMatricula("19201235");
    estudiante1.actualizarPromedio(8.2);
    estudiante1.actualizarActivo(true);

    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    cout << endl;

    Estudiante estudiante2("Athena Grace", 21, "20208195", 9.5, true );
    estudiante2.mostrarInformacionCompleta();
    estudiante2.calcularEstadoAcademico();
    cout << endl;

    estudiante2.incrementarEdad();
    estudiante2.mostrarEdad();
    cout << endl;

    estudiante2.actualizarPromedio(15.0);
    estudiante2.mostrarPromedio();

    return 0;

}