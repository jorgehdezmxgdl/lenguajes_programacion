//
// Created by jorgefausto on 19/03/2026.
//

#include "Empleado.h"

string Empleado::misTareas() {
    return "Debo obedecer";
}

void Empleado::setSalario(double salario) {
    this->salario = salario;
}

int Empleado::getSalario() {
    return salario;
}