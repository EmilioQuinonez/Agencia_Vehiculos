#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include "Vehiculo.h"
#include <vector>

using namespace std;

class Cliente : public Persona {
private:
    string email;
    long long numeroTelefono;

public:
    Cliente(string, string);
    Cliente(string, long long);
    string getEmail();
    int getNumeroTelefono();
    void setNumeroTelefono(long long);
    void setEmail(string);
    void mostrarInfoCliente(string, string);
    void mostrarInfoCliente(string, long long);
    void comprarVehiculo(vector<Vehiculo*>&);
    void compararVehiculo(vector<Vehiculo*>&);
};

#endif
