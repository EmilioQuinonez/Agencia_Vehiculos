#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include <iostream>

using namespace std;

class Cliente : public Persona {
    private:
        string email;
    public:
        Persona();
        Persona(string, string, string)
        void setEmail(string);
        string getInfoPersona();
};

#endif