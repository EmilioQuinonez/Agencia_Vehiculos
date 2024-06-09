#include "Vehiculo.h"
#include <iostream>

using namespace std;

Vehiculo::Vehiculo(string marca, int anio, string modelo, float precio) {
    this->marca = marca;
    this->anio = anio;
    this->modelo = modelo;
    this->precio = precio;
}

string Vehiculo::getMarca() const {
    return marca;
}

int Vehiculo::getAnio() const {
    return anio;
}

string Vehiculo::getModelo() const {
    return modelo;
}

float Vehiculo::getPrecio() const {
    return precio;
}

void Vehiculo::setMarca(string marca) {
    this->marca = marca;
}

void Vehiculo::setAnio(int anio) {
    this->anio = anio;
}

void Vehiculo::setModelo(string modelo) {
    this->modelo = modelo;
}

void Vehiculo::setPrecio(float precio) {
    this->precio = precio;
}

bool Vehiculo::operator<(const Vehiculo& otro) const {
    return this->precio < otro.precio;
}

bool Vehiculo::operator==(const Vehiculo& otro) const {
    return this->precio == otro.precio;
}
