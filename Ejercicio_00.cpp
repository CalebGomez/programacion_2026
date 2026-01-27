#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

struct Estudiante {
    string nombre;
    int edad;
    string matricula;
    float promedio;
    bool activo;
};

Estudiante estudiantes[MAX];
int total = 0;

void agregarEstudiante();
void mostrarPorMatricula();
void mostrarTodos();

int main() {
    int opc;

    do {
        cout << "SISTEMA DE GESTION DE ESTUDIANTES\n";
        cout << "1. Agregar estudiante\n";
        cout << "2. Mostrar un estudiante en especifico\n";
        cout << "3. Mostrar a todos los estudiantes\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;

        switch (opc) {
            case 1:
                agregarEstudiante();
                break;
            case 2:
                mostrarPorMatricula();
                break;
            case 3:
                mostrarTodos();
                break;
            case 4:
                cout << "Saliendo del programa...";
                break;
            default:
                cout << "Opcion invalida.";
        }

    } while (opc != 4);

    return 0;
}

void agregarEstudiante() {
    if (total >= MAX) {
        cout << "Se ha pasado el limite de estudiantes";
        return;
    }

    cout << "Agregar estudiante"<< endl;

    cin.ignore();
    cout << "Introduzca el Nombre: ";
    getline(cin, estudiantes[total].nombre);

    cout << "Introduzca la edad: ";
    cin >> estudiantes[total].edad;

    cout << "Introduzca la matricula: ";
    cin >> estudiantes[total].matricula;

    cout << "Introduzca el promedio: ";
    cin >> estudiantes[total].promedio;

    cout << "Se encuentra activo el estudiante? (1 = Si, 0 = No): ";
    cin >> estudiantes[total].activo;

    total++;

    cout << "Se ha agregado un estudiante";
}

void mostrarPorMatricula() {
    string mat;
    bool encontrado = false;

    cout << "BUSCAR ESTUDIANTE"<< endl;
    cout << "Ingrese la matricula: ";
    cin >> mat;

    for (int i = 0; i < total; i++) {
        if (estudiantes[i].matricula == mat) {
            cout << "Se encontro un estudiante ";
            cout << "Nombre: " << estudiantes[i].nombre << endl;
            cout << "Edad: " << estudiantes[i].edad << endl;
            cout << "Matricula: " << estudiantes[i].matricula << endl;
            cout << "Promedio: " << estudiantes[i].promedio << endl;
            cout << "Estado: "
                 << (estudiantes[i].activo ? "Activo" : "Inactivo") << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No hay ningun estudiante con esa matricula"<< endl;
    }
}

void mostrarTodos() {
    cout << "LISTA DE ESTUDIANTES"<< endl;

    if (total == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    for (int i = 0; i < total; i++) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Matricula: " << estudiantes[i].matricula << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << "Estado: "
             << (estudiantes[i].activo ? "Activo" : "Inactivo") << endl;
    }
}