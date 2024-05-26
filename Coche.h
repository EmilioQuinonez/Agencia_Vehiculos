#ifndef COCHE_H
#define COCHE_H

#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Coche : public Vehiculo {
    private:
        int numPuertas;
    public:
        Coche();
        Coche(string, string, int, float, int);
        void setNumPuertas(int);
        string getInfoVehiculo();
};

#endif