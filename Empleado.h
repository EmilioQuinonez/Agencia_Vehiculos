#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"
#include "Vehiculo.h"
#include <vector>

using namespace std;

class Empleado : public Persona {
private:
    int idEmpleado;

public:
    Empleado(string, int);
    int getIdEmpleado();
    void setIdEmpleado(int);
    void agregarVehiculo(vector<Vehiculo*>&, Vehiculo*);
};

#endif
