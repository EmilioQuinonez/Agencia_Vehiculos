#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Moto : public Vehiculo {
    private:
        string tipo;
    public:
        Moto();
        Moto(string, string, int, float, string);
        void setTipo(string);
        string getInfoVehiculo();
};

#endif