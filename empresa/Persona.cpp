#include <iostream>
#include <string>

#include "Persona.h"

int Persona::getEdad() {
    return edad;
}

string Persona::getNombreCompleto() {
    return nombre + " " + apellidos;
}
