#include "Coche.h"
#include <iostream>

using namespace std;

Coche::Coche(string marca, int anio, string modelo, int plazas, float precio) : Vehiculo(marca, anio, modelo, precio) {
    this->plazas = plazas;
}

void Coche::mostrarInfo() const {
    cout << "Marca: " << marca << ", Año: " << anio
         << ", Modelo: " << modelo << ", Plazas: " << plazas
         << ", Precio: " << precio << endl;
}

int Coche::getPlazas() const {
    return plazas;
}

void Coche::setPlazas(int plazas) {
    this->plazas = plazas;
}
