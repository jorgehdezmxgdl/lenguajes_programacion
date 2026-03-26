//
// Created by jorgefausto on 26/03/2026.
//

#ifndef INVENTARIO_PRECIO_H
#define INVENTARIO_PRECIO_H
using namespace std;
#include <string>

class Precio {
public: Precio();
    double precio_c;
    double precio_v;
    int existencias;
    int minimos;
    int idProducto;

    Precio (double pc, double pv, int e, int m, int ip): idProducto (ip), precio_c(pc), precio_v(pv), existencias(e), minimos(m) {}
    double calcularcosto();
    double determinaventa(int idProducto, string fecha);
    int numeroderepeticiones (int idProducto, int idProveedor, string fecha);
};


#endif //INVENTARIO_PRECIO_H