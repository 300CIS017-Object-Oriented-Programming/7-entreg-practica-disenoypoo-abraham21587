//
// Created by Usuario on 16/10/2025.
//

#ifndef POOSISTEMAGESTIONVENTAS_PRODUCTO_H
#define POOSISTEMAGESTIONVENTAS_PRODUCTO_H

#include <string>
using namespace std;

class Producto {
private:
    string codigo;
    string nombre;
    float precio;
    int cantidad;

public:
    Producto();
    Producto(string c, string n, float p, int cant);
    ~Producto();

    string getCodigo();
    string getNombre();
    float getPrecio();
    int getCantidad();

    void setCantidad(int c);
    void mostrarInfo();
};


#endif //POOSISTEMAGESTIONVENTAS_PRODUCTO_H