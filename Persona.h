#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona {
    protected:
        string nombre;
        string id;
    public:
        Persona();
        Persona(string, string);
        void setNombre(string);
        void setId(int);
        string getInfoPersona();
};

#endif