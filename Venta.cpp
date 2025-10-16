//
// Created by Usuario on 16/10/2025.
//

#include "Venta.h"
#include <iostream>
using namespace std;

Venta::Venta() {}

Venta::Venta(Cliente* c, Producto* p, int cant) {
    cliente = c;
    producto = p;
    cantidad = cant;
}

Venta::~Venta() {}

float Venta::calcularTotal() {
    return producto->getPrecio() * cantidad;
}

void Venta::mostrarVenta() {
    cout << "Cliente: " << cliente->getNombre()
         << " compro " << cantidad << " de " << producto->getNombre()
         << " por $" << calcularTotal() << endl;
}