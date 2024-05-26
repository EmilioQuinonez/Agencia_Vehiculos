#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>

using namespace std;

class Vehiculo {
    protected:
        string marca;
        string modelo;
        int año;
        float precio;
    public:
        Vehiculo();
        Vehiculo(string, string, int, float);
        void setMarca(string);
        void setModelo(string);
        void setAño(int);
        void setPrecio(float);
        string getInfoVehiculo();
};

#endif