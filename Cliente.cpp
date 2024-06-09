#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente(string nombre, string email) : Persona(nombre) {
        this->email = email;
}

Cliente::Cliente(string nombre, long long numeroTelefono) : Persona(nombre) {
        this->numeroTelefono = numeroTelefono;
}

string Cliente::getEmail() {
    return email;
}

void Cliente::setEmail(string email) {
    this->email = email;
}

int Cliente::getNumeroTelefono() {
    return numeroTelefono;
}

void Cliente::setNumeroTelefono(long long numeroTelefono) {
    this->numeroTelefono = numeroTelefono;
}

void Cliente::mostrarInfoCliente(string nombre, string email) {
    cout << "\nEl cliente se registro con los datos: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Email: " << email << endl;
}

void Cliente::mostrarInfoCliente(string nombre, long long numeroTelefono) {
    cout << "El cliente se registro con los datos: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Telefono: " << numeroTelefono << endl; 
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
