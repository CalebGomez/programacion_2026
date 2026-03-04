#include <iostream>
#include "vehiculo.h"
#include "coche.h"
#include "camion.h"
#include "autobus.h"
#include "moto.h"

using namespace std;

int main() {
    const int MAX =5;

    Coche coches[MAX]={
        Coche("Toyoya", "Corolla", 2019, "ABC123", 4 ),
        Coche("Mazda", "Sedan", 2020, "DEF456",4 )
    };

    Moto motos[MAX]={
        Moto("Suzuki", "GSX-8S", 2025, "GHI789", 10),
        Moto("Yamaha", "R6", 2018, "JKL132",7)
    };

    Camion camiones[MAX]={
        Camion("Volvo", "FH16", 2021, "AKW291", 18.5),
        Camion("Scania", "R500",2016, "NQP756", 20.0)
    };

    Autobus autobuses[MAX]={
        Autobus("MCI", "D-102", 2023, "HGY642", 38),
        Autobus("Yutong", "ZK6126HQA9", 2026, "MGJ744", 57)
    };

    int contadorCoches = 2;
    int contadorMotos = 2;
    int contadorCamiones = 2;
    int contadorAutobuses = 2;

    int opcion;
    string nuevaPlaca;

    do {
        cout << "===== MENU ====="<< endl;
        cout << "1. Mostrar los vehiculos"<< endl;
        cout << "2. Cambiar placa del vehiculo"<< endl;
        cout << "3. Salir del programa"<< endl;
        cout << "Seleccione una opcion: "<< endl;
        cin >> opcion;

        switch(opcion) {
        
        case 1:
            cout << "===== COCHES =====" << endl;
            for(int i = 0; i < contadorCoches; i++){
                cout << "Coche #" << i+1 << endl;
                coches[i]. mostrarInformacion();
            }

            cout << "===== MOTOS =====" << endl;
            for(int i = 0; i < contadorMotos; i++){
                cout << "Motos #" << i+1 << endl;
                motos[i]. mostrarInformacion();
            }

            cout << "===== CAMIONES =====" << endl;
            for(int i = 0; i < contadorCamiones; i++){
                cout << "Camiones #" << i+1 << endl;
                camiones[i]. mostrarInformacion();
            }

            cout << "===== AUTOBUSES =====" << endl;
            for(int i = 0; i < contadorAutobuses; i++){
                cout << "Autobuses #" << i+1 << endl;
                autobuses[i]. mostrarInformacion();
            }

            break;

        case 2: {
            int tipo, numero;

            cout << "1. Coche, 2. Moto. 3. Camion. 4. Autobus."<< endl;
            cout << "Seleccione el vehiculo: "<< endl;
            cin >> tipo;

            cout << "Numero del vehiculo: ";
            cin >> numero;
            
            cout << "Ingrese nueva placa: "<< endl;
            cin >> nuevaPlaca;

            numero--;

            if(tipo == 1 && numero < contadorCoches)
            coches[numero].actualizarPlaca(nuevaPlaca);

            else if(tipo == 2 && numero < contadorMotos)
            motos[numero].actualizarPlaca(nuevaPlaca);
                        
            else if(tipo == 3 && numero < contadorCamiones)
            camiones[numero].actualizarPlaca(nuevaPlaca);
            
            else if(tipo == 4 && numero < contadorAutobuses)
            autobuses[numero].actualizarPlaca(nuevaPlaca);

            else 
               cout <<"Vehiculo no encontrado" << endl;

            break;
        }

        case 3:
            cout << "Saliendo del programa...." << endl;
            break;

        default:
             cout <<"Opcion no valida.. Intente de nuevo" << endl;

        }

    } while(opcion !=3);

    return 0;

}
