//
// Created by jorgefausto on 26/03/

#ifndef INVENTARIO_PRODUCTO_H
#define INVENTARIO_PRODUCTO_H
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Producto {
public: Producto();
    string nombre;
    float precio;
    string cb;
    int minimo;
    int existencia;
    int idProducto;
    Producto(string n, float p, string c, int m, int t, int id):nombre(n), precio(pr), cb(c), minimo(mn), existencia(ex), idProducto(iP) {
        cout << "inicializando produto" << endl;
    }
};





#endif //INVENTARIO_PRODUCTO_H