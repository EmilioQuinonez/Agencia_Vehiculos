#include "Empleado.h"
#include <iostream>

using namespace std;

Empleado::Empleado(string nombre, int idEmpleado) : Persona(nombre) {
    this->idEmpleado = idEmpleado;
}

int Empleado::getIdEmpleado() {
    return idEmpleado;
}

void Empleado::setIdEmpleado(int idEmpleado) {
    this->idEmpleado = idEmpleado;
}

void Empleado::agregarVehiculo(vector<Vehiculo*>& vehiculos, Vehiculo* vehiculo) {
    vehiculos.push_back(vehiculo);
}
