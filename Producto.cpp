//
// Created by Usuario on 16/10/2025.
//

#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto() {}

Producto::Producto(string c, string n, float p, int cant) {
    codigo = c;
    nombre = n;
    precio = p;
    cantidad = cant;
}

Producto::~Producto() {}

string Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
float Producto::getPrecio() { return precio; }
int Producto::getCantidad() { return cantidad; }

void Producto::setCantidad(int c) { cantidad = c; }

void Producto::mostrarInfo() {
    cout << "Codigo: " << codigo << ", Nombre: " << nombre
         << ", Precio: " << precio << ", Cantidad: " << cantidad << endl;
}