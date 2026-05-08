#include <iostream>
#include "custom_stack.h"

using namespace std;

int main() {

    CustomStack pila;

    pila.push(1);
    pila.push(2);
    pila.push(3);

    cout << "Tamano de la pila: " << pila.size() << endl;
    cout << "Elemento en el tope: " << pila.top() << endl;

    pila.pop();
    cout << "Despues del pop: " << pila.top() << endl;

    pila.pop();
    cout << "Despues del pop"<< pila.top()<< endl;



    return 0;
}