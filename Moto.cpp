#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Moto : public Vehiculo {
private:
    int cilindrada;

public:
    Moto(string, int, string, int, float);
    void mostrarInfo() const override;
    int getCilindrada() const;
    void setCilindrada(int);
};

#endif
