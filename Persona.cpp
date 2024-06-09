#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona() {}

Persona::Persona(string nombre) {
    this->nombre = nombre;
}

string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}

void Persona::verVehiculos(const vector<Vehiculo*>& vehiculos) {
    cout << "Lista de Vehículos Disponibles:\n";
    for (size_t i = 0; i < vehiculos.size(); ++i) {
        cout << i + 1 << ". ";
        vehiculos[i]->mostrarInfo();
    }
}
