#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include "Vehiculo.h"
#include <vector>

using namespace std;

class Cliente : public Persona {
private:
    string email;

public:
    Cliente(string, string);
    string getEmail();
    void setEmail(string);
    void comprarVehiculo(vector<Vehiculo*>&);
};

#endif

