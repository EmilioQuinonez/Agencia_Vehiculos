#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <vector>
#include "Vehiculo.h"

using namespace std;

class Persona {
protected:
    string nombre;

public:
    Persona();
    Persona(string);
    virtual void mostrarInfo();
    string getNombre();
    void setNombre(string);
    void verVehiculos(const vector<Vehiculo*>&);
};

#endif
