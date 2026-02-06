#include "Estudiante.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante() {
    nombre = "";
    edad = 0;
    matricula = "";
    promedio = 0.0;
    activo = false;
}

Estudiante::Estudiante(string nombre, int edad, string matricula, float promedio, bool activo) {
    this->nombre = nombre;
    this->edad = edad;
    this->matricula = matricula;
    this->promedio = promedio;
    this ->activo = activo;
}

void Estudiante::actualizarNombre(string nuevoNombre){
    nombre = nuevoNombre;
}

void Estudiante::actualizarEdad(int nuevaEdad){
    edad = nuevaEdad;
}

void Estudiante::actualizarMatricula(string nuevaMatricula){
    matricula = nuevaMatricula;
}

void Estudiante::actualizarPromedio(float nuevoPromedio){
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0){
        promedio = nuevoPromedio;
    }
    else{
        cout <<"El promedio es incorrecto, verifique de nuevo."<< endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado){
    activo = nuevoEstado;
}

string Estudiante::obtenerNombre(){
    return nombre;
}

int Estudiante::obtenerEdad(){
    return edad;
}

string Estudiante::obtenerMatricula(){
    return matricula;
}

float Estudiante::obtenerPromedio(){
    return promedio;
}

bool Estudiante::obtenerActivo(){
    return activo;
}

void Estudiante::mostrarNombre(){
    cout <<"Nombre del estudiante:"<< nombre << endl;
}

void Estudiante::mostrarEdad(){
    cout <<"Edad:"<< edad << endl;
}

void Estudiante::mostrarMatricula(){
    cout <<"Matricula:"<< matricula << endl;
}

void Estudiante::mostrarPromedio(){
    cout <<"Promedio:"<< promedio << endl;
}

void Estudiante::mostrarActivo(){
    if (activo) 
        cout <<"Estado del alumno: Activo"<< endl;
    else
        cout <<"Estado del alumno: Inactivo"<< endl;
}

void Estudiante::mostrarInformacionCompleta(){
    mostrarNombre();
    mostrarEdad();
    mostrarMatricula();
    mostrarPromedio();
    mostrarActivo();
}

void Estudiante::incrementarEdad(){
    edad++;
}

void Estudiante::calcularEstadoAcademico(){
    cout <<"Estado académico: "<< endl;

    if (promedio >= 9.0 )
        cout <<"Excelente"<< endl;
    
    else if (promedio >= 8.0 )
        cout <<"Muy bueno"<< endl;
    
    else if (promedio >= 7.0)
        cout << "Bueno"<< endl;

    else if (promedio >= 6.0)
        cout <<"Regular"<< endl;

    else
        cout <<"Necesitas Mejorar"<< endl;
}