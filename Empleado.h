#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Empleado.h"
#include <iostream>

using namespace std;

class Empleado : public Persona {
    private:
        string cargo;
    public:
        Empleado();
        Empleado(string, string, string);
        void setCargo(string);
        string getInfoPersona();
};

#endif