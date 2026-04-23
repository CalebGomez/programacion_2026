#ifndef PERSONA_H
#define PERSONA_H

using namespace std;
#include <string>

class Persona{
    private:
        string nombre;
        int edad;
    
    public:
        Persona(string nombre, int edad);
        
        virtual void mostrar();

};



#endif