//
// Created by jorgefausto on 26/03/2026.
//

#include "Precio.h"
double Precio::calcularcosto() {

}
double Precio:: determinaventa(int idProducto, string fecha) {
    int ventasproveedor1 = this->numeroderepeticiones(1,1,NULL);
    int ventasproveedor2 = this->numeroderepeticiones(2,2,NULL);
    int ventasproveedor3 = this->numeroderepeticiones(3,3,NULL);
    int proveedorfinalista = 0;
    if (ventasproveedor1 > ventasproveedor2) {
        proveedorfinalista = ventasproveedor1;
    } if (ventasproveedor3 > proveedorfinalista)
        proveedorfinalista = ventasproveedor3;
    return 100 * 1.05;
}

int Precio::numeroderepeticiones(int idProducto, int idProveedor, string fecha) {
    switch (idProveedor) {
        case 1: return 10;
            case 2: return 5;
            case 3: return 2;
    }
}
