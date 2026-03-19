#include <iostream>
#include <string>
using namespace std;


class Departamento {
public:
    string nombre;
    virtual string misTareas();
    Departamento(string n): nombre(n) {}

};

