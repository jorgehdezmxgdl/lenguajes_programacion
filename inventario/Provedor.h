#ifndef INVENTARIO_PROVEDOR_H
#define INVENTARIO_PROVEDOR_H
#include <string>
using namespace std;


class Provedor {
public:Provedor();
    int idProvedor;
    string empresa, nombreEncargado;

    Provedor(int i, string e, string n):idProvedor(i), empresa(e), nombreEncargado(n) {
        cout << "inicializando proveedor" << endl;
    }

};


#endif //INVENTARIO_PROVEDOR_H