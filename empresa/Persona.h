#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    //atributos
    string nombre;
    string apellidos;
    int    edad;
    // métodos o funciones
    string getNombreCompleto();
    int    getEdad();
    virtual string misTareas() { return "comer, ver series y salir con amigos"; }
    //constructor
    Persona(string n, string a, int e): nombre(n), apellidos(a), edad(e) {
        cout << "Invocando en constructor";
    }
    ~Persona() {
        cout << "Se ha eliminado el objeto";
    }
};

