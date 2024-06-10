#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto(string marca, int anio, string modelo, int cilindrada, float precio) : Vehiculo(marca, anio, modelo, precio) {
    this->cilindrada = cilindrada;
}

void Moto::mostrarInfo() const {
    cout << "Marca: " << marca << ", Año: " << anio
         << ", Modelo: " << modelo << ", Cilindrada: " << cilindrada
         << ", Precio: " << precio << endl;
}

int Moto::getCilindrada() const {
    return cilindrada;
}

void Moto::setCilindrada(int cilindrada) {
    this->cilindrada = cilindrada;
}
