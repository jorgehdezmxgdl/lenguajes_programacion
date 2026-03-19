#include "Departamento.h"
#include "Persona.h"


class Empleado: public Departamento, public Persona {
  private:
    double salario;
  public:
    string tipoExperiencia();
    string misTareas();
    void  setSalario(double);
    int   getSalario();
    Empleado();
};
