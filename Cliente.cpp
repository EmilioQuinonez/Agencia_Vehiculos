#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente(string nombre, string email) : Persona(nombre) {
        this->email = email;
    }

string Cliente::getEmail() {
    return email;
}

void Cliente::setEmail(string email) {
    this->email = email;
}

void Cliente::comprarVehiculo(vector<Vehiculo*>& vehiculos) {
    int eleccion;
    cout << "Seleccione el número del vehículo que desea comprar: ";
    cin >> eleccion;
    if (eleccion > 0 && eleccion <= vehiculos.size()) {
        cout << "Ha comprado el siguiente vehículo:\n";
        vehiculos[eleccion - 1]->mostrarInfo();
        delete vehiculos[eleccion - 1];
        vehiculos.erase(vehiculos.begin() + eleccion - 1);
    } else {
        cout << "Selección no válida.\n";
    }
}

