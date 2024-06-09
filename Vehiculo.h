#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <string>

using namespace std;

class Vehiculo {
protected:
    string marca;
    int anio;
    string modelo;
    float precio;

public:
    Vehiculo();
    Vehiculo(string, int, string, float);
    virtual ~Vehiculo() = default;
    virtual void mostrarInfo() const = 0;
    string getMarca() const;
    int getAnio() const;
    string getModelo() const;
    float getPrecio() const;
    void setMarca(string);
    void setAnio(int);
    void setModelo(string);
    void setPrecio(float);
    bool operator<(const Vehiculo& otro) const;
    bool operator==(const Vehiculo& otro) const;
};

#endif
