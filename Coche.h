#ifndef COCHE_H
#define COCHE_H

#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Coche : public Vehiculo {
private:
    int plazas;

public:
    Coche(string, int, string, int, float);
    void mostrarInfo() const override;
    int getPlazas() const;
    void setPlazas(int);
};

#endif
